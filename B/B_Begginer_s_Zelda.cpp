/*Jai Bajrang Bali*/
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
     int n;
     cin >> n;
     vector<int> adj[n+1];
     int deg[n+1] = {0};
     int mx = 0;
     for(int i = 0;i < n-1;i++){
        int a,b;
        cin >> a >> b;
        // mx = max({mx,a,b});
        deg[a]++;
        deg[b]++;
        adj[a].push_back(b);
        adj[b].push_back(a);
     }
    //  cout << mx << "\n";
     queue<int> pq;
     for(int i = 1;i <= n;i++){
        if(deg[i] == 1){
            pq.push(i);
        }
     }
     int ans = sz(pq)/2 + sz(pq)&1;
     int lst = 0;
     int vis[n+1] = {0};
     while(!pq.empty()){
        int node = pq.front();
        lst = node;
        if(vis[node]) continue;
        vis[node] = 1;
        pq.pop();
        for(auto &it : adj[node]){
            deg[it]--;
            if(!vis[it] && deg[it] == 1){
                pq.push(it);
            }
        }
     }
     for(int i = 0;i <= n; i++) vis[i] = 0;
     // bfs from lst node 
     int cnt = 0;
    //  while(!pq.empty()) pq.pop();
     pq.push(lst);
    //  cout << lst << "\n";s
     while(!pq.empty()){
        int node = pq.front();
        pq.pop();
        if(vis[node]) continue;
        vis[node] = 1;
        bool f = false;
        for(auto &it : adj[node]){
            if(!vis[it]){
                f = true;
                pq.push(it);
            }
        }
        if(!f) cnt++;
     }
    //  cout << cnt << "\n";
     cout << (cnt/2 + (int)(cnt&1)) << "\n";
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
