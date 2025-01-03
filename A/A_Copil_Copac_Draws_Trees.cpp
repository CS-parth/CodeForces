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

vector<int> dp;
map<pair<int,int>,int> idx;
map<int,vector<int>> adj;
void dfs(int node,int par){
    // cout << node << " " << par << "\n";
    if(node != 1){
        if(idx[{par,node}] >= idx[{-1,par}]) dp[node] = dp[par];
        else dp[node] = dp[par] + 1;
    }
    for(auto &it : adj[node]){
        if(it!=par)
        dfs(it,node);
    }
}
void init_1(){
    int n;
    cin >> n;
    idx.clear();
    adj.clear();
    dp = vector<int> (n+1,0);
    dp[1] = 1;
    idx[{-1,1}] = 0;

    for(int i = 0;i < n-1;i++){
        int u,v;
        cin >> u >> v;
        idx[{u,v}] = i;
        // idx[{v,u}] = i;
        idx[{-1,v}] = i;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1);
    int ans = 1;
    for(auto &it : dp) ans = max(it,ans);
    cout << ans << '\n';
}  

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    for(int k = 0; k < T ; k++){
        init_1();  
    }
}
