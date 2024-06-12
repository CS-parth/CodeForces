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
    int n,m;
    cin >> n >> m;
    int l = max(0ll,n-m);
    int r = n+m;
    // cout << lBit << " " << rBit << "\n";
    int ans = l;
    for(int i = 30;i>=0;i--){
        int val = l|(1<<i);
        // remove all 1's after ith
        val = (val>>i);
        val = (val<<i);
        if(val <= r){
            // cout << i << " " << (1<<i) << "\n";
            ans|=(val);
        }
    }   
    cout << ans << "\n";
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
