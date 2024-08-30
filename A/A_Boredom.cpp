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

int mp[(int)1e5+2];
vector<int> dp;
void init_1(){
    int n;
    cin >> n;
    vector<int> v(n);
    input(v);
    vector<int> nxt(n);
    sort(all(v));
    dp.assign(n+1,-1);
    // vector<int> freq((int)1e5+2);
    for(int i = 0;i < n;i++){
        int idx = upper_bound(all(v),v[i]+1) - v.begin();
        nxt[i] = idx;
        mp[v[i]]++;
    }
    dp[n] = 0;
    for(int i = n-1;i >= 0;i--){
        dp[i] = max(dp[i+1],v[i]*mp[v[i]] + dp[nxt[i]]);
    }
    cout << dp[0] << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
