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
    int m,k;
    cin >> m >> k;
    unordered_map<int,int> mp;
    if(m == 1){
        cout << "NO" << "\n";
        return;
    }
    int x = 1;
    for(int i = 0;i < n;i++){
        // cout << x << "\n";
        mp[x]++;
        x++;
        if(x == (m+1)) x = 1;
    }
    // cout << mp[1] << mp[2] << "\n"; 
    int mx = 0;
    for(auto &it : mp){
        mx = max(it.second,mx);
    }
    if(k >= (n-mx)){
        cout << "NO" << "\n";
    }else{
        cout << "YES" << '\n';
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
