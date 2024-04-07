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
    vector<int> adj[n];
    for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    double ans = 0;
    vector<int> vis(n,false);
    function<void(int,double,int)> dfs = [&](int node,double p,int dis){
        if(vis[node]) return;
        vis[node] = true;

        if(adj[node].size() == (node != 0)){
            ans += (double)dis*p;
            return;
        }
        double size = (double)adj[node].size() - (node != 0);
        for(auto &it : adj[node]){
            dfs(it,p/(double)size,dis+1);
        }
    };
    dfs(0,1,0);
    // print(ans);
    cout << fixed << setprecision(15) << (double)ans << "\n";
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
