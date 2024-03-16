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
#define input(a) for (int &x : a) cin >> x;


int mod_exp(int a,int b){
    if(b == 1) return a%MOD;
    if(b == 0) return 1;
    if(b%2 == 0){
        return mod_exp((a*a)%MOD,b/2)%MOD;
    }else{
        return a*mod_exp(a,b-1)%MOD;
    }
}
void init_1(){
    int n;
    cin >> n;
    int ans = (mod_exp(10,n) - mod_exp(9,n) + MOD)%MOD;
    ans = (ans - mod_exp(9,n) + MOD)%MOD;
    ans = (ans + mod_exp(8,n))%MOD;
    cout << ans << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
