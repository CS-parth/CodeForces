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
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    input(a);
    int l = 0; // always true
    int r = 2*1e9+2; // always false
    while (r-l > 1){
        int mid = (r+l)>>1;
        int water = 0;
        for(int i = 0; i < n;i++){
            water += (mid-a[i] > 0) ? mid-a[i] : 0;
        }
        if(water <= w){
            l = mid;
        }else{
            r = mid;
        }
    }
    cout << l << '\n';
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
