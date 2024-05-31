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

typedef struct Node{
    int left;
    int right;
}Node;
void init_1(){
    int n;
    cin >> n;
    vector<Node> adj(n);
    string str;
    cin >> str;
    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        adj[i].left = a;
        adj[i].right = b;
    }
    int mn = 1e9;
    function<void(int,int)> dfs = [&](int node,int steps)->void{
        if(steps >= mn){
            return;
        }
        if((adj[node].left == -1) && (adj[node].right == -1)){
            // leaf node
            mn = min(mn,steps);
            return;
        }
        if(str[node] != 'U'){
            if(str[node] == 'L'){
                if(adj[node].left != -1)
                dfs(adj[node].left,steps);
                if(adj[node].right != -1)
                dfs(adj[node].right,steps+1);
            }else{
                if(adj[node].left != -1)
                dfs(adj[node].left,steps+1);
                if(adj[node].right != -1)
                dfs(adj[node].right,steps);
            }
        }else{
            // make it L
            if(adj[node].left != -1)
            dfs(adj[node].left,steps+1); 
            // make it R
            if(adj[node].right != -1)
            dfs(adj[node].right,steps+1);
        }
    };
    dfs(0,0);
    cout << mn << "\n";
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
