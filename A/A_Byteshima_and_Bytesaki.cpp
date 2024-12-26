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
    int n,m,r1,r2;
    cin >> n >> m >> r1 >> r2;
    if(r1>r2) swap(r1,r2);
    int x1 = r1+1;
    int y1 = r1+1;
    int x2 = 2*r1+1 + r2+1;
    int y2 = r2+1;
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << "\n";
    if((2*r1+1 + 2*r2+1) > m || (2*y2 + 1) > n){
        cout << -1 << "\n";
    }else{
        int ans = x1+x2+y1+y2;
        if(r1==r2){
            cout << ans + 1 << "\n";
        }else{
            cout << ans << "\n";
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
