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


bool predicate(int idx,int mid,vector<int> &pi,int val){
     int res = pi[mid];
     if(idx!=0) res-=pi[idx-1];
    //  cout << res << " " << val << '\n';
     return (res < val);
}
void init_1(){  
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    input(a);
    input(b);
    vector<int> pi(n,0);
    for(int i = 0;i < n;i++){
        if(i == 0) pi[i] = b[i];
        else pi[i] = pi[i-1] + b[i];   
    }
    vector<int> hits(n,0);
    vector<int> carry(n+1,0);
    for(int i = 0;i < n;i++){
        int val = a[i];
        int low = i;
        int high = n-1;
        while(high - low > 1){
            int mid = (high + low)/2;
            if(predicate(i,mid,pi,val)){
                low = mid;
            }else{
                high = mid;
            }
        }
        if(predicate(i,high,pi,val)){
            // cout << high << '\n';
            hits[high]++;
            if(i!=0) hits[i-1]--;
            int res = pi[high];
            if(i!=0) res -= pi[i-1];
            carry[high+1] = (val - res);
        }else if(predicate(i,low,pi,val)){
            // cout << low << '\n';
            hits[low]++;
            if(i!=0) hits[i-1]--;
            int res = pi[low];
            if(i!=0) res -= pi[i-1];
            carry[low+1] += (val - res);
        }else{
            carry[i] += val;
        }
    }
    // print(hits);
    // print(carry);
    for(int i = n-1;i >= 0;i--){
        if(i==n-1) continue;
        hits[i] = hits[i] + hits[i+1];
    }
    for(int i = 0;i < n;i++){
        cout << carry[i] + b[i]*hits[i] << ' ';
    }cout << '\n';
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
