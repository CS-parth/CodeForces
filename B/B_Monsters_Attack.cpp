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
    map<int,int> mp;
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b(n);
    input(a);
    input(b);
    for(int i = 0;i < n;i++){
        mp[abs(b[i])]+=a[i];
    }
    int neg = 0;
    while(!mp.empty()){
        int dis =  (*mp.begin()).first;
        int heal = (*mp.begin()).second;
        // cout << dis << " " << heal << "\n";
        if(dis-neg <= 0){
            cout << "NO" << "\n";
            return;
        }
        int temp = k;
        while(!mp.empty() && (*mp.begin()).second <= temp){
            temp-=(*mp.begin()).second;
            mp.erase(mp.begin());
        }
        if(!mp.empty())
        (*mp.begin()).second -= temp;
        neg++;
    }
    cout << "YES" << "\n";
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
