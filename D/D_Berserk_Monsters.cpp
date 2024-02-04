/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    int n;
    cin >> n;
    int size = n;
    vector<int> a(n);
    // cout << 1 << "\n";
    input(a);
    vector<int> def(n);
    input(def);
    // cout << 1 << "\n";
    unordered_map<int,unordered_set<int>> adj;
    for(int i = 0;i < n;i++){
        // insert left
        if(i != 0)
        adj[i].insert(i-1); 
        // inset right
        if(i != n-1)
        adj[i].insert(i+1);
    }
    queue<int> q;
    // in one loop decide who are the dead people
    int no_of_dead = 0;
    vector<int> ans;
    for(int i = 0;i < n;i++){
        int op1 = (i!=0) ? a[i-1] : 0;
        int op2 = (i!=n-1) ? a[i+1] : 0;
        if(op1 + op2 > def[i]){
            no_of_dead++;
            for(auto &it : adj[i]){
                q.push(it);
            }
            if(adj[i].size() == 1){
                adj[*adj[i].begin()].erase(i);
            }else{
                vector<int> neighbours;
                for(auto &it : adj[i]) neighbours.push_back(it);
                adj[neighbours[0]].erase(i);
                adj[neighbours[1]].erase(i);
                adj[neighbours[0]].insert(neighbours[1]);
                adj[neighbours[1]].insert(neighbours[0]);
            }
        }
    }
    ans.push_back(no_of_dead);
    while(!q.empty()){
        // check the whole queue int one pass
        size_t sz = q.size();
        int dead_cnt = 0;
        for(int i = 0;i < sz;i++){
            // check if it can die or not
            int node = q.front();
            vector<int> neighbours;
            for(auto &it : adj[node]) neighbours.push_back(it);
            int attack = 0;
            for(int i = 0;i < neighbours.size();i++){
                attack += a[neighbours[i]];
            }
            if(def[node] < attack){
                q.pop();
                dead_cnt++;
                for(auto &it : neighbours){
                    q.push(it);
                }
                for(auto &it : neighbours){
                    adj[it].erase(node);
                }
                if(neighbours.size() == 2){
                    adj[neighbours[0]].insert(neighbours[1]);
                    adj[neighbours[1]].insert(neighbours[0]);
                }
            }
        } 
        ans.push_back(dead_cnt);
        if(dead_cnt == 0) break;
    }
    // size_t crnt_size = ans.size();
    int more = n - ans.size();
    while(n--){
        ans.push_back(0);
    }
    for(auto &it : ans) cout << it << " ";
    cout << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
