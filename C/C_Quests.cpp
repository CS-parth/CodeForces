/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
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
    // idx = min(n-1,k-1);
    // take all till idx and then += mxbi*(k-len)
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    input(a);
    input(b);
    vector<int> mx(n);
    vector<int> pi(n);
    int m = -1;
    for(int i = 0;i < n;i++){
        mx[i] = max(b[i],m);
        m = mx[i];
    }
    // print(mx);
    for(int i = 0;i < n;i++){
        if(i==0) pi[i] = a[i];
        else pi[i] = pi[i-1] + a[i];
    }
    int idx = min(n-1,k-1);
    int ans = -1;
    for(;idx >= 0;idx--){
        // cout << idx << " " << pi[idx] << " " << mx[idx]*(k - (idx+1)) << "\n";
        ans = max(pi[idx] + mx[idx]*(k - (idx+1)),ans);
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
