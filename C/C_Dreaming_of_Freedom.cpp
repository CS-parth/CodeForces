#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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


bool isPrime(int num){
    for(int i = 2; i*i <= num; i++){
        if(num%i == 0) return false;
    }
    return true;
}
int smallestprimefact(int num){
    for(int i = 2;i*i <= num;i++){
        if(num%i == 0) return i;
    }
    if(num > 1){ // for prime numbers
        return num;
    }
    return 2;
}
int largestprimefact(int num){
    int save = 2;
    for(int i = 2;i*i <= num;i++){
        if(num%i == 0){
            save = i;
            while(num%i == 0){
                num = num/i;
            }
        }
    }
    if(num > 1){ // for prime numbers
        save = num;
    }
    return save;
}
void init_1(){
    int n,m;
    cin >> n >> m;
    if((n == 1) || (m == 1)){
        cout << "YES" << "\n"; 
        return;
    }   
    //Case 1 : if n is prime and <= m then NO
    //Case 2 : if n is Even -> NO
    //Case 3 : if n is odd and gcd(n.m)!=1 NO
    if(smallestprimefact(n) <= m){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << "\n";
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
