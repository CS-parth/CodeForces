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
int m;
string in;
// bool rec(int level,string str,string a,string b){
//     if(level == m){
//         int i = 0;
//         int j = 0;
//         for(;i < str.size(),j < in.size();j++){
//             if(str[i] == in[j]){
//                 i++;
//             }
//         }
//         if(i == m){
//             return false;
//         }else{
//             return true;
//         }
//     }

//     // transitions
//     int end = b[level] - '0';
//     int start = a[level] - '0'; 
//     for(int i = start; i <= end;i++){
//         char ch = '0' + i;
//         if(rec(level + 1,str + ch,a,b) == true){
//             return true;
//         }
//     }
//     return false;
// }
void init_1(){
    //  string in;
     cin >> in;
     int n = in.size();
     cin >> m;
     string s,t;
     cin >> s >> t;
     vector<int> dig[10];
     int k = 0;
     for(auto &it : in){
        int num = it - '0';
        dig[num].pb(k++);
     }
     int dp[11][11];
     memset(dp,-1,sizeof(dp));
     for(int level = 0; level < m;level++){
        int l = s[level] - '0';
        int r = t[level] - '0';
        for(int x = l; x <= r;x++){
            if(level == 0){
                if(!dig[x].empty())
                dp[level][x] = dig[x][0];
                else
                dp[level][x] = n;
            }else{
                // dp[level][x] = dp[level-1][x];
                for(int j = 0; j < 10;j++){
                    if(dp[level-1][j] == -1)
                        continue;
                    else{
                        int ok = dp[level-1][j];
                        auto y = upper_bound(all(dig[x]),ok);
                        if(y == dig[x].end()){
                            dp[level][x] = n;
                        }else{
                            dp[level][x] = max(dp[level][x],*y);
                        }
                    }
                }
            }
        }
     }
     // check for the last level dp
     for(int i = 0;i < 10;i++){
        if(dp[m-1][i] == n){
            cout << "YES" << "\n";return;
        }
     }
     cout << "NO" << "\n";
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
