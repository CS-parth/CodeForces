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
    int n;
    cin >> n;
    vector<int> a(n);   
    input(a);
    vector<int> dp(n+10,1e9);
    for(int i = n;i < n+10;i++) dp[i] = 0;
    for(int i = n-1;i >= 0;i--){
        if(i<=(n-2)){
            dp[i] = min({dp[i],(a[i] + a[i+1]) + dp[i+3],(a[i] + a[i+1]) + dp[i+4]});
        }
        dp[i] = min({dp[i],a[i] + dp[i+2],a[i] + dp[i+3]});
    }
    // print(dp);
    cout << dp[0] << '\n';
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
