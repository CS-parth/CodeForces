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
    char array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> array[i][j];
        }
    }
    int col[m+1] = {0};
    int row[n+1] = {0};
    // 0 means balanced and 1 means Black more and -1 means White more
    char output[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            output[i][j] = '.';
        }
    }
    for(int i=0;i<n;++i){
       int cnt = 0;
        for(int j = 0;j < m;j++){
            if(array[i][j] == 'U' && output[i][j] == '.'){
                debug(i);
                debug(j);
                if(cnt&1){
                    output[i][j] = 'B';
                    output[i+1][j] = 'W';
                }else{
                    output[i][j] = 'W';
                    output[i+1][j] = 'B';
                }
                cnt++;
            }
        }        
        if(cnt & 1){
            cout << -1 << "\n";
            return;
        }
    }   
    for(int i =0;i<m;i++){
        int cnt = 0;
        for(int j =0;j<n;j++){
            if(array[j][i] == 'L' && output[j][i] == '.'){
                debug(i);
                if(cnt&1){
                    output[j][i] = 'B';
                    output[j][i+1] = 'W';
                }else{
                    output[j][i] = 'W';
                    output[j][i+1] = 'B';
                }
                cnt++;
            }       
        }
        if(cnt&1){
            cout << -1 << '\n';
            return;
        }
    }
    // cout << 1 << "\n";
    
    for(int i= 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << output[i][j];
        }cout << "\n";
    }
}

signed main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
