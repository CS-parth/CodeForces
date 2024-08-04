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
     vector<int> fact;
     // factors of n-x;
     for(int i = 1;i*i <= n-x;i++){
        if(((n-x)%i) == 0){
            fact.push_back(i);
            fact.push_back((n-x)/i);
        }
     }
    //  print(fact);
     set<int> ans;
     for(int i = 0;i < fact.size();i++){
        if((fact[i]&1) == 0){
            int k = (fact[i]+2)/2;
            if(k>=x) ans.insert(k);
        }
     }
     // factors of n+x-2
     fact.clear();
     for(int i = 1;i*i <= (n+x-2);i++){
        if(((n+x-2)%i) == 0){
            fact.push_back(i);
            fact.push_back((n+x-2)/i);
        }
     }
    //  print(fact);
     for(int i = 0;i < fact.size();i++){
        if((fact[i]&1) == 0){
            int k = (fact[i]+2)/2;
            if(k>x) ans.insert(k);
        }
     }
     cout << ans.size() << "\n";
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
