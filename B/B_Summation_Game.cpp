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
    int n,k,x;
    cin >> n >> k >> x;
    vector<int> pi(n+1,0);
    vector<int> v(n+1,0);
    for(int i = 1;i <= n;i++){
        cin >> v[i];
    }
    sort(all(v));
    for(int i = 1;i <= n;i++){
        pi[i] = pi[i-1] + v[i];
    }
    int r = n+1;
    int l = (x > n) ? 0 : r-x;
    int cnt = 0;
    int ans = -1e9;
    while(cnt <= k){
        if(l == 0){
            ans = max(ans,-pi[r-1]);
        }else if(r == 0){
            ans = max(ans,0ll);
            break;
        }else{
            ans = max(ans,pi[l-1] - pi[0] - (pi[r-1] - pi[l-1]));
        }
        r--;
        if(l != 0) l--;
        cnt++;
    }
    cout << ans << "\n";
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
