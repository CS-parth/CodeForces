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
int MEX(vector<int> a){
    // int ans = 0;
    map<int,bool> mp;
    for(auto &it : a){
        mp[it] = true;
    }
    for(int i = 0; i <= a.size(); i++){
        if(mp[i] == false){
            return i;
        }
    }
    // return ans;
    return a.size();
}
void init_1(){
     int n;
     cin >> n;
     vector<int> a(n);
     input(a);
     int ok = MEX(a);
     if(ok == 0){
        cout << "Yes" << "\n";
        return;
     }
    if(ok == n){
        cout << "No" << "\n";
        return;
    }
    // check if mex + 1 exists or not 
    int f = 0;
    for(int i = 0; i < n;i++){
        if(a[i] == ok + 1){
            f = 1;break;
        }
    }
    if(!f){
        cout << "Yes" << "\n";
    }else{
        // find first and last occ of ok+1
        int fst,lst;
        for(int i = 0;i < n;i++){
            if(a[i] == ok+1) lst = i;
        }
        for(int i = n-1;i >= 0;i--){
            if(a[i] == ok+1) fst = i;
        }
        //mex-1 between fst and lst should not be all mex-1
        map<int,int> mp;
        for(int i =0;i<n;i++){
            if(a[i] <= ok-1) mp[a[i]]++;
        }
        for(int i=fst;i<=lst;i++){
            if(a[i] <= ok-1){
                mp[a[i]]--;
                if(mp[a[i]] == 0){
                    cout << "No" << "\n";
                    return;
                }
            }
        }
        cout << "Yes" << "\n";
    }
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
