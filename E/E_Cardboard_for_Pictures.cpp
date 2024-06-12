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
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    input(a);
    int l = 0; // always false
    int r = 1e9;
    // int sq = 0;
    int ans = -1;
    while(l<r){
        int mid = (l+r)>>1;
        int val = 0;
        for(int i = 0;i < n;i++){
            if((a[i] + 2*mid)*(a[i] + 2*mid) )
            val+=(a[i] + 2*mid)*(a[i] + 2*mid);
            if(val > x){
                break;
            }
        }
        if(val <= x){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
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
