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
    set<int> b(all(a));
    vector<int> v(all(b));
    auto BS = [&](int l,int r,int key){
        // l = never true
        // r = always true
        while(r-l > 1){
            int mid = (l+r)/2;
            if(v[mid]<=key){
                l = mid;
            }else{
                r = mid;
            }
        }
        return r;
    };
    int ans = 1;
    // print(v);
    for(int i = 0;i < v.size();i++){
        int idx = BS(-1,i,v[i]-n);
        // cout << idx << "\n";
        int window_size = (i-idx+1);
        ans = max(window_size,ans);
    }
    cout << ans<< "\n";
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
