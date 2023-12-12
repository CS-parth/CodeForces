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

int dp[200002];
int a[200002];
vector<vector<int>> adj(200002);
int dfs(int level){
    if(dp[level] != -1) return dp[level];
    int ans = 0;
    if(adj[level].size() == 0){
        return dp[level] = a[level];
    }
    for(int i = 0;i < adj[level].size();i++){
        // cout << it << "\n";
        ans += dfs(adj[level][i]);
    }
    // if(ans == 0) ans = 1e9;
    // cout << level << ans << "\n";
    return dp[level] = min(a[level],ans);
}
void init_1(){
    memset(dp,-1,sizeof(dp));
    // for(int i = 0;i < 200002;i++) adj[i].clear();
    int n,k;
    cin >> n >> k;
    // vector<vector<int>> adj(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    int ok;
    for(int i = 0;i < k;i++){
        cin >> ok;
        a[ok-1] = 0;
    }
    for(int i = 0;i < n;i++){
        // cout << a[i] << "\n";
        // all these node will connect to i
        int size;
        cin >> size;
        // if(size == 0) continue;
        // cout << size << "\n";
        adj[i].clear();
        for(int j = 0;j < size;j++){
            int x;
            cin >> x;
            // cout << x-1 << "\n";
            adj[i].push_back(x-1);
        }
    }
    // cout << "Br" << "\n";
    for(int i = 0;i < n;i++){
        cout << dfs(i) << " ";
        // cout << 1 << "\n";
    }cout << "\n";
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
