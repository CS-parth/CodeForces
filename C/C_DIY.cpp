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
    input(a);
    map<int,int> mp;
    for(int i = 0;i < n;i++){
        mp[a[i]]++;
    }
    map<int,int> st;
    int sum = 0;
    vector<int> vec;
    for(auto &it : mp){
        it.second = it.second/2;
        for(int i = 0;i < it.second;i++) vec.push_back(it.first); 
    }
    if(vec.size() < 4){
        cout << "NO" << '\n';
    }else{
        cout << "YES" << "\n";
        int idx = vec.size()-1;
        // print(vec);
        vector<int> ans = {vec[0],vec[1],vec[idx-1],vec[idx]}; 
        cout << ans[0] << " " << ans[1] << " ";
        cout << ans[0] << " " << ans[3] << " ";
        cout << ans[2] << " " << ans[1] << " ";
        cout << ans[2] << " " << ans[3] << " ";
        cout << "\n"; 
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
