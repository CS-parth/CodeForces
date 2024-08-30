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
    int n,k;
    cin >> n >> k;
    map<int,map<int,bool>> adj;
    vector<int> in(n+1,0);
    vector<int> vis(n+1,false);
    for(int i = 0;i  < k;i++){
        vector<int> v(n);
        input(v);
        for(int i = 1;i < n-1;i++){
            // i-->i+1
            if(!adj[v[i]].count(v[i+1])){
                adj[v[i]][v[i+1]] = true;
                in[v[i+1]]++;
            }
        }
    }
    queue<int> q;
    for(int i = 1;i <= n;i++){
        if(in[i]==0) q.push(i);
    }
    while(!q.empty()){
        int node = q.front();
        q.pop();
        vis[node] = true;
        for(auto &it : adj[node]){
            // it.first is next
            in[it.first]--;
            if(in[it.first]==0) q.push(it.first);
        }
        adj.erase(node);
    }
    bool flag = true;
    for(int i = 1;i <= n;i++){
        flag&=vis[i];
    }
    if(flag){
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
