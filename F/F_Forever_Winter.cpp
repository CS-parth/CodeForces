#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#define int long long 
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    int n,m;
    cin >> n >> m;
    vector<int> adj[n+1];
    int deg[n+1] = {0};
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        adj[b].push_back(a);
        adj[a].push_back(b);
        // cout << 1 << "\n";
        deg[b]++;
        deg[a]++;
    }
    // create a fake node
    // ajd[0].connects to node having degree 1
    for(int i = 1;i <= n;i++){
        if(deg[i] == 1){
            adj[0].push_back(i);
        }
    }
    // run the bfs on that fake node
    int dis[n+1] = {0};
    dis[0] = 0;
    bool vis[n+1] = {false};
    queue<pair<int,int>> q;
    q.push({0,dis[0]});
    vis[0] = true;
    while(!q.empty()){
        pair<int,int> node = q.front();
        q.pop();
        for(auto it : adj[node.first]){
            if(!vis[it]){
                vis[it] = true;
                dis[it] = dis[node.first] + 1;
                q.push({it,dis[it]});
            }
        }
    }
    // dis 1 wale are leaf nod e
    // dis 2 wale are x
    int y = 0,x = 0;
    for(int i = 1; i <= n; i++){
        if(dis[i] == 1){
            y++;
        }else if(dis[i] == 2){
            x++;
        }
    }
    cout << x << " " << (int)(y/x) << "\n";
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
