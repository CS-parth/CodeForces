/*Jai Bajrang Bali
  hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama rama hare hare*/
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
    int n,k,d;
    cin >> n >> k >> d;
    vector<int> a(n);
    vector<int> b(k);
    input(a);
    input(b);
    int ans = -1e9;
    for(int day = 0;day < min(2*n,d);day++){
        vector<int> v(n+1,0);
        for(int i = 0;i < day;i++){
            v[0]++;
            debug(v);
            v[b[(i%k)]]--;
            debug(v);
        }
        int op1 = 0;
        // applying first op
        int px = 0;
        debug(v);
        for(int i = 0;i < n;i++){
            v[i] = px + v[i];
            px = v[i];
        }
        debug(v);
        for(int i = 0;i < n;i++) v[i] += a[i];
        for(int i = 0;i < n;i++) op1 += (v[i] == i+1) ? 1 : 0;
        debug(op1);
        // applying op2 
        int op2 = (d-day-1)/2;
        debug(op2);
        ans = max(op1 + op2,ans);
    }
    cout << ans << '\n';
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