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

map<pair<int,int>,int> mp;
vector<int> parent;
vector<int> val;

int find(int node){
    while(node != parent[node]) node = parent[node];
    return node;
};
    

void init_1(){
    int n;
    cin >> n;
    vector<int> a(n);
    input(a);
    // print(a);
    bool isFive = false;
    for(int i = 0;i < n;i++) if(a[i]%5==0) isFive = true;
    if(isFive){
        for(int i = 0;i < n;i++) (a[i]%10==5) ? (a[i] = a[i]+5) : (a[i] = a[i]);
        for(int i = 0;i < n;i++){
            if(a[i] != a[0]) {
                cout << "No" << '\n';
                return;
            } 
        }
        cout << "Yes" << '\n';
        return;
    }
    
    for(int i = 0;i < n;i++){
        if(find(mp[{a[i]%10,((a[i]/10)%2==0 ? 0 : 1)}]) != find(mp[{a[0]%10,((a[0]/10)%2==0 ? 0 : 1)}])) {
            cout << "No" << "\n";
            return; 
        }
    }
    cout << "Yes" << '\n';
    return;
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    int k = 0;
    for(int i = 0;i <= 9;i++){
        mp[{i,0}] = k++; // 20K + x
        mp[{i,1}] = k++; // 10K + x
    }
    parent = vector<int>(k,0);
    val = vector<int>(k,1);
    for(int i = 0;i < parent.size();i++) {
        parent[i] = i;
    }
    vector<vector<int>> adj(k,vector<int>(0));
    adj[mp[{1,1}]].push_back(mp[{2,1}]);
    adj[mp[{2,1}]].push_back(mp[{4,1}]);
    adj[mp[{4,1}]].push_back(mp[{8,1}]);
    adj[mp[{8,1}]].push_back(mp[{6,0}]);
    adj[mp[{6,0 }]].push_back(mp[{2,1}]);
    adj[mp[{7,0}]].push_back(mp[{4,1}]);
    adj[mp[{9,0}]].push_back(mp[{8,1}]);
    adj[mp[{3,0}]].push_back(mp[{6,0}]);
    for(int it = 0;it < k;it++){
        for(auto &node: adj[it]){ // it to node is an edge
            int a = find(it);
            int b = find(node);
            if(a==b) continue;
            if(val[b]>val[a]) swap(a,b);
            val[a] += val[a];
            parent[b] = a;
        }
    }
    adj.clear();
    adj = vector<vector<int>>(k,vector<int>(0));
    adj[mp[{3,1}]].push_back(mp[{6,1}]);
    adj[mp[{6,1}]].push_back(mp[{2,0}]);
    adj[mp[{2,0}]].push_back(mp[{4,0}]);
    adj[mp[{4,0}]].push_back(mp[{8,0}]);
    adj[mp[{8,0}]].push_back(mp[{6,1}]);
    adj[mp[{1,0}]].push_back(mp[{2,0}]);
    adj[mp[{9,1}]].push_back(mp[{8,0}]);
    adj[mp[{7,1}]].push_back(mp[{4,0}]);
    for(int it = 0;it < k;it++){
        for(auto &node: adj[it]){ // it to node is an edge
            int a = find(it);
            int b = find(node);
            if(a==b) continue;
            if(val[b]>val[a]) swap(a,b);
            val[a] += val[a];
            parent[b] = a;
        }
    }
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
