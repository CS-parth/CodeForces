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
    vector<int> dp(n,-1);
    function<int(int)> rec = [&](int idx)->int{
        if(idx == n) return 0;
        if(dp[idx] != -1) return dp[idx];
        int ans = 1e9;
        // take
        if(n-1-idx >= a[idx]){
            ans = min(rec(idx+a[idx]+1),ans);
        }
        // notTake
        ans = min(1+rec(idx+1),ans);
        return dp[idx] = ans;
    };
    cout << rec(0) << "\n";
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
