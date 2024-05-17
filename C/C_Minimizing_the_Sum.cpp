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
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    input(a);
    vector<vector<int>> dp = vector<vector<int>>(n,vector<int>(k+1,-1));
    int mn = a[0];
    vector<int> pi(n);
    pi[0] = a[0];
    for(int i = 1;i < n;i++){
        pi[i] = pi[i-1] + a[i];
    }
    for(int i = 0;i < n;i++){
        mn = min(a[i],mn);
        for(int j = 0;j <= k;j++){
            if(j >= i){// j as # of op and i+1 as length len-1 j is capable of all min so min j is len-1
                dp[i][j] = mn*(i+1);
                continue;
            }else if(i == 0){
                dp[i][j] = a[i];
                continue;
            }else if(j == 0){
                dp[i][j] = pi[i];
                continue;
            }
            // cout << i << " " << j << "\n";
            // j < i-1
            int cnt = 1;
            int nj = j;
            int ni = i-1;
            int nmn = a[i];
            int ans = dp[ni][nj] + (cnt*nmn);
            while(nj >= 0){
                ans = min(dp[ni][nj] + (cnt*nmn),ans);
                nmn = min(a[ni],nmn);
                ni--;
                nj--;
                cnt++;
            }
            dp[i][j] = ans;
        }
    }
    cout << dp[n-1][k] << "\n";
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
