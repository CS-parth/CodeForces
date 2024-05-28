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
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    input(a);
    // vector<vector<bool>> bits(n,vector<bool>(32,false));
    vector<int> save = a;
    for(int i = 0;i < q;i++){
        int k;
        cin >> k;
        a = save;
        unordered_map<int,bool> mp;
        for(int i = 62;i >= 0;i--){
            // lets set the ith bit in all the number 
            int val = (1ll<<i);
            int req_k = 0;
            bool f = false;
            for(int j = 0;j < n;j++){
                // to_add = a[j]-(val); if the bit is not setted 
                if(!(a[j]&(val))){
                    // cout << (val) << "\n";
                    req_k = (req_k + (val)-(a[j]%(val)));
                    if(req_k < 0) f = true;
                }
            }
            if(f) continue;
            // neg req_k means to much high 
            // cout << req_k << " " << i << "\n";
            if(k >= req_k){
                k-= req_k;
                mp[i] = true;
                for(int j = 0;j < n;j++){ 
                    if(!(a[j]&(val))){
                        a[j] += (val)-(a[j]%(val));
                    }
                }
            }
        }
        // create a number from the mp
        int ans = 0;
        for(auto &it: mp){
            int x = (1ll<<it.first);
            ans += x;
        }
        cout << ans << "\n";
    }
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cout << set_bits(LONG_LONG_MAX) << "\n";
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
