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
    unordered_map<int,int> dp;
    dp[1] = 0;
    int ans = 0;
    unordered_map<int,bool> st;
    for(int i = 0;i < n;i++) st[a[i]] = true;
    int lcm = a[0];
    int mx = *max_element(all(a));
    for(int i = 1;i < n;i++){
        lcm = (a[i]*lcm)/__gcd(a[i],lcm);
        if(lcm > mx){
            cout << n << "\n";
            return;
        }
    } 
    // cout << lcm << "\n";
    if(lcm > mx){
        cout << n << "\n";
        return;
    }
    for(int i = 0;i < n;i++){
        unordered_map<int,int> newdp;
        for(auto &it : dp){
            int op = (it.first*a[i])/__gcd(it.first,a[i]);
            newdp[op] = max(newdp[op],it.second + 1);
        }
        for(auto &it : newdp){
            dp[it.first] = max(it.second,dp[it.first]);
        }
    }
    for(auto &it : dp){
        if(st[it.first] == false) ans = max(it.second,ans);
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
