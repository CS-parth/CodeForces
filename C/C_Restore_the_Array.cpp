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

int main() {
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        int size;
        cin >> size;
        vector<int> a;
        for(int i = 0; i < size -1 ; i++){
            int ok;
             cin >> ok;
             a.pb(ok);
        }
        int i = 0;
        int flag = 1;
        if(a[i] == a[i+1]){
            // if(i+2 == a.size()){
            // }else{
            //     if(a[i+2] > a[i+0]){
            //         i += 2;
            //     }else{
            //         a.insert(a.begin() + i+1,0);
            //         a.erase(a.begin() + i+2);
            //         i += 2;
            //     }
            // }
            i+=2;
        }
        else if(a[i] > a[i+1]){
            i++;
        }else{
            a.insert(a.begin() + i+1,0);
            flag = 0;
            i+=2;
        }
        while(i < a.size()-1){
            if(a[i] == a[i+1]){
                if(i+2 == a.size()){
                    break;
                }else{
                    if(a[i+2] > a[i+0]){
                        i += 2;
                    }else{
                    a.insert(a.begin() + i+1,0);
                    a.erase(a.begin() + i+2);
                    i += 2;
                    continue;
                }
            }
        }
            else if(a[i] < a[i+1] && flag){
                a.insert(a.begin() + i+1,0);
                flag = 0;
                i += 2;
                continue;
            }
            i++;
        }
        if(a.size() == size){}
        else{
            a.pb(0);
        }
        for(auto j : a){
            cout << j << " ";
        }   
        cout << "\n";
    }
}