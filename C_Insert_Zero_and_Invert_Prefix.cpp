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

// vector<pair<int,int>> v;
void init_1(){
    // v.clear(); 
    int n;
    cin >> n;
    vector<int> a(n);
    // vector<int> b;
    input(a);
    if(a[a.size()-1] == 1){
        cout << "NO" << "\n";return;
    }
    cout << "YES" << "\n";
    int k = a.size() - 1;
    while(k>=0){
        debug(a);
        int zero = 0;
        int one = 0;
        while(k>=0 && a[k--] == 0){
            zero++;
        }
        debug(k);
        if(a[k+1] != 0){
            k++;
        }
        debug(k);
        while(k>=0 && a[k--] == 1){
            one++;
        }
        debug(k);
        if(a[k+1] != 1){
            k++;
        }
        debug(k);
        // v.pb({zero,one});
        int sum = zero + one;
        for(int i = 0; i < sum - 1;i++){
            cout << 0 << " ";
        }
        if(one > 0){
            cout << (one) << " ";
        }
    }
    // int g = 0;
    // while(g < v.size()){
    //     int sum = v[g].first + v[g].second;
    //     for(int i = 0; i < sum - 1;i++){
    //         cout << 0 << " ";
    //     }
    //     if(v[g].second > 0){
    //         cout << (v[g].second) << " ";
    //     }
    //     g++;
    // }
    // debug(b);
    cout << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
std::cin.tie(nullptr);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
