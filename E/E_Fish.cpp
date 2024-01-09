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
int n;
double arr[20][20];
double dp[19][(1<<18)][19];
double rec(int level,int mask,int winner){
    // base case 
    if(level == n){
        return 1;
    }
    debug(dp[level][mask][winner]);
    if(dp[level][mask][winner] != -1) return (double)dp[level][mask][winner];

    double ans = 0;
    for(int i = 0;i < n;i++){ // i is the losser of this round
        if(mask&(1<<i) && i != winner){
            double temp = 1;
            for(int j = i;j < n;j++){
                // cout << temp << " ";
                if(mask&(1<<j) && j!=i){
                    debug(i);
                    debug(j);
                    debug(arr[j][i]);
                    temp *= ((double)(arr[j][i])*(double)rec(level+1,mask^(1<<i),winner));
                    debug(temp);
                }
            }
            debug(temp);
            ans += temp;
        }
    }
    return dp[level][mask][winner] = (double)ans;
}
void init_1(){
    cin >> n;
    // debug(n);
    // memset(arr,1,sizeof(arr));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> arr[i][j];
        }
    }
    for(int level = 0;level <= 18;level++){
        for(int mask = 0;mask < (1<<18);mask++){
            for(int winner = 0;winner < 18;winner++){
                dp[level][mask][winner] = -1;
            }
        }
    }
    // debug(1);
    // cout << dp[1][17][17] << "\n";
    for(int i = 0;i < n;i++){
        cout << fixed << setprecision(6) << rec(1,(1<<n)-1,i) << " ";
    }cout << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
