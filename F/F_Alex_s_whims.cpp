/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (auto &x : a) cin >> x;
#define print(a) for (auto &x : a) cout << x << " ";cout << "\n";

void init_1(){  
     int n,q;
     cin >> n >> q;
     vector<int> a(q,0);
     input(a);
     for(int i = 1;i <= n-1;i++){
        cout << i << " " << i+1 << "\n";
     }
     int prev = n-1;
     for(int i = 0;i < q;i++){
        int u = n-a[i];
        int v1 = prev;
        int v2 = n;
        if(prev == u){
            cout << -1 << " " << -1 << " " << -1 << "\n";
        }else{
            cout << v2 << " " << v1 << " " << u << "\n";
            prev = u;
        }
     }
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
