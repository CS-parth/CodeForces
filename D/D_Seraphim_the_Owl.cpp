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
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(n);
    input(a);input(b);
    vector<int> pi(n);
    for(int i = n-1;i >= 0;i--){
        if(i==n-1){
            pi[i] = b[i];
        }else{
            pi[i] = pi[i+1] + b[i];
        }
    }
    vector<int> dp(n);
    set<int> st;
    for(int i = n-1;i >= 0;i--){
        if(i == n-1){ // base condition
            dp[i] = a[i];
            st.insert(dp[i]-pi[i]); 
        }else{
            int val = 0;
            auto itr = st.lower_bound(-1ll*(pi[i+1]+a[i]));
            if(itr == st.end()) val = 1e15;
            else val = *itr;
            dp[i] = min(a[i]+pi[i+1],val+pi[i+1]+a[i]);
            st.insert(dp[i]-pi[i]); 
        }
    }
    int ans = 1e15; // min coins
    for(int i = 0;i < m;i++){
        ans = min(ans,dp[i]);
    }
    cout << ans << '\n';
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
