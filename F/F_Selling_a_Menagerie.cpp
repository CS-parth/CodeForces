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


void init_1(){
    // First do leaf cutting 
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    input(a);
    input(b);
    vector<int> adj[n];
    vector<int> indeg(n);
    for(int i = 0;i < n;i++){
        adj[i].push_back(--a[i]);
        indeg[a[i]]++;
    }

    queue<int> q;
    for(int i = 0;i < n;i++){
        if(indeg[i] == 0){
            q.push(i);
        }
    }

    vector<bool> vis(n,false);
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        vis[node] = true;
        cout << node+1 << " ";
        for(auto &it : adj[node]){
            indeg[it]--; // while going from node to it the indeg will reduce
            if(indeg[it] == 0) q.push(it);
        }
    }

    for(int i = 0;i < n;i++){
        if(vis[i] == false){
            int val = -1;
            int mn = 1e15;
            q.push(i);
            vector<int> v;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                if(vis[node]) continue;
                vis[node] = true;
                v.push_back(node);
                if(b[node] < mn){
                    mn = b[node];
                    val = node;
                }
                for(auto &it : adj[node]){
                    q.push(it);
                }
            }
            // print(v);
            // end at node
            int index = -1;
            for(int i = 0;i < v.size();i++){
                if(v[i] == val){
                    index = i;
                    break;
                }
            }
            index++;
            index = (index%v.size());
            int j = index;
            // cout << '\n';
            // cout << j << " " << index << " ";
            do{
                cout << v[j]+1 << " ";
                j++;
                j = (j%v.size());
            }while(index!=j);
        }
    }

    cout << "\n";
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
