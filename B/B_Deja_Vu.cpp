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

// #define int long long 
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    int n,m;
    cin >> n;
    cin >> m;
    vector<int> a(n);
    vector<int> b(m);// 4 8 16
    // vector<int> prefix(m);
    input(a);
    input(b);
    sort(all(b)); 
    debug(a);
    debug(b);  
    vector<int> pow_2(31,0);
    int p = 1;
    for(int i =0;i <31;i++){
        pow_2[i] = p;
        p *= 2; 
    }
    debug(pow_2);
    vector<pair<int,int>> lst(n,make_pair(0,0));
    for(int i=0;i<n;i++){
        for(int j = 30;j >= 0;j--){
            if(a[i]%pow_2[j] == 0){
                lst[i] = make_pair(j,i);
                break;
            }
        }
    }
    sort(all(lst));
    debug(lst);
    for(int i = 0;i<m;i++){
        auto it = lower_bound(lst.begin(),lst.end(),make_pair(b[i],0));
        if(it == lst.end()) continue;
        int index = it - lst.begin();
        debug(index);
        for(int k = index;k < n;k++){
            a[lst[k].second] += pow_2[b[i]-1];
            lst[i].first--;
        }
    }
    for(int i =0;i<n;i++){
        cout << a[i] << " "; 
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
