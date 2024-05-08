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
    for(int i = 0;i < q;i++){
        int l,r;
        cin >> l >> r;
        l--;r--;
        int mx = 0;
        unordered_map<int,int> mp;
        for(int i = l;i <= r;i++){
            mp[a[i]]++;
            if(mx < mp[a[i]]) mx = mp[a[i]];
        }
        if(mx <= r-l+1-mx){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
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
