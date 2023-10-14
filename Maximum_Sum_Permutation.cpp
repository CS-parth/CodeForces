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
int a[200002];
int b[200002];
signed main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        int size;
        cin >> size;
        int q;
        cin >> q;
        map<int,int> mp_q;
        vector<int> v;
        for(int i = 0; i < size; i++){
            int ok;
            cin >> ok;
            v.pb(ok);
        }
        sort(all(v));
        map<int,int> fix;
        for(int i = 0; i < q; i++){
            int l,r;
            cin >> l >> r;
            if(l == r){
                fix[l]++;
            }
            b[l]++;
            b[r]--;
        }
        vector<pair<int,int>> index;
        int cnt = 0;
        for(int i = 1; i <= size; i++){
            if(b[i] >= 0){
                cnt += b[i];
                if(fix[i]>0){
                    index.push_back({cnt+fix[i],i});
                }else{
                    index.push_back({cnt,i});
                }
            }else{
                if(fix[i]>0){
                    index.push_back({cnt+fix[i],i});
                }else{
                    index.push_back({cnt,i});
                }
                cnt += b[i];
            }
            b[i] = 0;   
        }
        sort(all(index));
        int i = 1;
        int ans = 0;
        for(auto it: index){
            a[it.second] = v[i-1];
            ans += it.first*v[i-1];
            i++;
        }
        cout << ans << '\n';
        for(int i = 1; i <= size; i++){
            cout << a[i] << ' ';
            a[i] = 0;
        }
        cout << '\n';
    }
}