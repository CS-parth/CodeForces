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
    // 4 1
    // 1 2
    int n;cin >> n;
    int k;cin >> k;
    unordered_map<int,bool> mp;
    unordered_map<int,bool> same;
    for(int i = 0;i < k;i++){
        int x,y;
        cin >> x >> y;
        mp[max(x,y)] = true;
        if(x==y) same[x] = true;
    }
    vector<int> dp(n+1,1);
    dp[0] = dp[1] = 1;
    for(int i = 2;i <= n;i++){ // iterating over rows  
        dp[i] = (1*dp[i-1] + 2*(i-1)*dp[i-2])%MOD;
    } 
    int idx = n - (mp.size()*2 - same.size());
    cout << dp[idx]%MOD << '\n';
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
