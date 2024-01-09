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
int quadrant(int i,int j){
    if(i > 0 && j > 0) return 0;
    if(i < 0 && j > 0) return 1;
    if(i < 0 && j < 0) return 2;
    if(i > 0 && j < 0) return 3;
    if(j == 0 && i > 0) return 4;
    if(i == 0 && j < 0) return 5;
    if(j == 0 && i < 0) return 6;
    if(i == 0 && j > 0) return 7;
}
void init_1(){
    int n;
    cin >> n;
    int arr[8] = {0};
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        if(x == 0 && y == 0) continue;
        arr[quadrant(x,y)]++;
    }
    if(arr[1] == 0 && arr[2] == 0 && arr[6] == 0){
        cout << "YES" << '\n';
        return;
    }
    if(arr[0] == 0 && arr[1] == 0 && arr[7] == 0){
        cout << "YES" << '\n';
        return;
    }
    if(arr[0] == 0 && arr[3] == 0 && arr[4] == 0){
        cout << "YES" << '\n';
        return;
    }
    if(arr[2] == 0 && arr[3] == 0 && arr[5] == 0){
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << "\n";
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
