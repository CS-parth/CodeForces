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
    int n;
    cin >> n;
    vector<int> a(n);
    input(a);
    int sum = 0;
    for(int i = 0;i < n;i++) sum += a[i];
    auto is_square = [&](int node){
         int l = 0;
         int r = 1e8;
         while(r-l > 1){
            int mid = (r+l)>>1;
            if(mid*mid == node) return mid;
            if(mid*mid < node){
                l = mid;
            }else{
                r = mid;
            }
         }
         return -1ll;
    };
    if(is_square(sum)!=-1){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
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
