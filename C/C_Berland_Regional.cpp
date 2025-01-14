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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    input(a);
    input(b);
    map<int,vector<int>> mp;
    for(int i = 0;i < n;i++){
        mp[a[i]].push_back(b[i]);
    }
    for(auto &it : mp){
        sort(all(it.second));
        reverse(all(it.second));
        vector<int> pi(1,0);
        for(int i = 0;i < it.second.size();i++){
            // cout << it.first << '\n';
            pi.push_back(pi.back() + it.second[i]);
        }
        it.second = pi;
        // print(it.second);
    }
    // cout << "OUT" << '\n';
    vector<int> ans(n,0);
    for(auto &it : mp){
        int size = it.second.size()-1;
        for(int i=1;i<=size;i++){
            for(int j=i;j<=size;j+=i){
                // cout << it.second[j] << " " << it.second[j-i] << '\n';
                ans[i-1] += (it.second[j]-it.second[j-i]);
            }
        }
    }
    print(ans);
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
