/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (auto &x : a) cin >> x;
#define print(a) for (auto &x : a) cout << x << " ";cout << "\n";

vector<vector<int>> pi;
bool predicate(int k,int mid,int l){
    int nd = 0;
    for(int j = 0;j < 31;j++){
        int val = pi[mid][j];
        if(l!=0) val -= pi[l-1][j];
        if(val == (mid-l+1)) nd = nd|(1<<j);
    }
    return (nd>=k);
}
void init_1(){
    int n;
    cin >> n;
    vector<int> a(n);
    pi = vector<vector<int>>(n,vector<int>(32,0));
    input(a);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < 31;j++){
            if(i!=0) pi[i][j] += pi[i-1][j];
            pi[i][j] += (a[i]>>j)&1;
        }
    }
    int q;
    cin >> q;
    for(int i = 0;i < q;i++){
        int l,k;
        cin >> l >> k;
        l--;
        int low = l;
        int high = n-1;
        while(high - low > 1){
            int mid = (high+low)/2;
            // from l to mid
            if(predicate(k,mid,l)){
                low = mid;
            }else{
                high = mid;
            }
        }
        if(predicate(k,high,l)) cout << high+1 << " ";
        else if(predicate(k,low,l)) cout << low+1 << " ";
        else cout << "-1" << " ";
    }cout << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
