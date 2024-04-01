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

vector<int> dp(1111,INT_MAX);
void init_1(){
    int n;
    cin >> n;
    if(n <= 1000){
        cout << dp[n] << '\n';
        return;
    }else{
        int t = (n-500) / 15;
        n -= t * 15;
        cout << t + dp[n] << endl;
        return;
    }
    // cout << ans << '\n';
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    dp[0] = 0;
    // int ans = 1e9;
    for(int i = 1; i <= 1000;i++){
        int op1 = (i-1 >= 0) ? dp[i-1] : 1e15;
        int op2 = (i-3 >= 0) ? dp[i-3] : 1e15;
        int op3 = (i-6 >= 0) ? dp[i-6] : 1e15;
        int op4 = (i-10 >= 0) ? dp[i-10] : 1e15;
        int op5 = (i-15 >= 0) ? dp[i-15] : 1e15;
        dp[i] = 1 + min({op1,op2,op3,op4,op5});
    }
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
