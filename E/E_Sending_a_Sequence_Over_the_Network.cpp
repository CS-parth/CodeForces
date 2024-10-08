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
    cin >> n;
    vector<int> a(n);
    input(a);
    vector<bool> dp(n+1,false);
    dp[n] = true;
    for(int i = n-1;i >= 0;i--){
        // make it start
        if((i+a[i]+1) <= n){
            dp[i] = dp[i]|dp[i+a[i]+1];
        }
        // make it end
        if((i-a[i]) >= 0){
            dp[i-a[i]] = dp[i-a[i]]|dp[i+1];
        }
    }
    if(dp[0]){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
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
