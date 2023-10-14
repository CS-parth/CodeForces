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
    int n;cin >> n;
    vector<int> a(n);
    input(a);
    vector<int> b;
    int ans = 0;
    int index = -1;
    for(int i=0;i<n;i++){
        if(a[i] > 0){
            index = i;
            break;
        }
    }
    vector<pair<int,int>> v;
    // int ans = 0;
    if(index == -1){
        while (n != 1){
            /* code */
            // cout << n-1 << ' ' << n << "\n";
            if(a[n-2] > a[n-1]){
                v.pb({n-1,n});
                ans++;
            }
            n--;
        }
    }else{
        int ni = 5;
        while(ni--){
            // cout << index + 1 << " " << index + 1 << "\n";
            v.pb({index+1,index+1});
            ans++;
        }
        for(int i=index;i>0;i--){
            // cout << index << " " << index + 1 << "\n";
            if(a[i-1] > a[i]){
                v.pb({i,i+1});
                ans++;
            }
        }
        int times = 2;
        debug(n);
        for(int i = index + 1; i < n;i++){
            // cout << i + 1 << " " << index + 1 << "\n";
            int temp = times;
            if(a[i] >= 0){
                temp = 1;
            }
            while(temp--){
                v.pb({i+1,i});
                ans++;
            }
        }
    }
    cout << ans << "\n";
    for(auto &it : v){
        cout << it.first << " " << it.second << "\n";
    }
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
