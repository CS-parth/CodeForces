/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
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
    int a,b,c;
    cin >> a >> b >> c;
    int ans = a;
    ans += b/3;
    // b%3 are still remaining 
    int rem = b%3;
    int need = 3-rem;
    if(rem == 0) need = 0;
    if(c<need){
        cout << -1 << "\n";
    }else{
        c-=need;
        if(rem) ans++;
        ans += c/3;
        ans += (int)(c%3!=0);
        cout << ans << '\n';
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
