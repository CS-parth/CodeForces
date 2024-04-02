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
    int m;
    cin >> n >> m;
    vector<int> a(n);
    input(a);
    vector<int> adj[n];
    for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        a--;b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int cnt = 0;
    function<void(int,int,int)> dfs = [&](int node,int red,int parent)->void{
        if(a[node] == 1) red++;
        else red = 0;
        
        if(red > m) return;

        if(adj[node].size() == 1 && node != 0){
            cnt++;
            return;
        }
        
        for(auto &it : adj[node]){
            if(it != parent){
                dfs(it,red,node);
            }
        }
    };
    dfs(0,0,-1);
    cout << cnt << "\n";
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
