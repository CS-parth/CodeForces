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

void init_1(){
    int n,m,k;
    cin >> n >> m >> k;
    int a;
    cin >> a;
    vector<int> v(a);
    input(v);
    vector<int> x;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            x.push_back((min(i,n-k)-max(-1ll,i-k))*(min(j,m-k)-max(-1ll,j-k))); 
        }
    }
    sort(all(x));
    sort(all(v));
    int ans = 0;
    int q = x.size()-1;
    for(int i = a-1;i >= 0;i--){
        ans = ans + v[i]*x[q--];
    }
    cout << ans << "\n";
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