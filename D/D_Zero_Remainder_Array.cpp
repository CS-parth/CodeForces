/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    input(a);
    map<int,int> mp;
    for(int i = 0;i < n;i++){
        if(a[i]%k != 0)
        mp[k - a[i]%k]++;
    }
    int op = 0;
    int x = 0;
    bool entry = true;
    while(entry){
        // cout << mp[1] << '\n';
        entry = false;
        for(auto &it : mp){
            if(it.second){
                // Reach  
                op += (it.first - x + k)%k;
                mp[it.first]--; 
                if(mp[it.first]) entry = true;
                x = it.first;
                // apply
                op++; 
                // update
                x = (x+1)%k;
            }
        }
    }
    cout << op << "\n";
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
