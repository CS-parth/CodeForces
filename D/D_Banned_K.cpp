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

void init_1(){
    int n;
    cin >> n;
    vector<int> a(n,0);
    input(a);
    unordered_map<int,int> mp;
    for(int i = 0;i < n;i++){
        mp[a[i]]++;
    }
    unordered_map<int,bool> mp1; 
    for(auto &it : mp){ 
        if(it.second <= 1){
            mp1[it.first] = true;
        }
    }
    for(auto &it : mp1){
        mp.erase(it.first);
    }
    int ans = 0;
    for(auto &it : mp){
        ans += (it.second*(it.second-1))/2;
    }
    for(int i = 0;i < n;i++){
        if(mp.count(a[i])){
            cout << ans - mp[a[i]] + 1 << "\n";
        }else{
            cout << ans << "\n";
        }
    }
}   

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T= 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
