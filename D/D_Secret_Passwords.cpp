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
    vector<string> a;
    for(int i = 0;i < n;i++){
        string str;
        cin >> str;
        a.emplace_back(str);
    }
    int parent[26];
    int value[26];
    for(int i = 0;i < 26;i++) parent[i] = i;
    for(int i = 0;i < 26;i++) value[i] = 1;
    unordered_map<int,int> mp;
    function<int(int)> find = [&](int node)->int{
        while(node != parent[node]) node = parent[node];
        return node;
    };
    for(auto &it : a){
        mp[it[0]-'a'] = 1;
        for(int i = 1;i < it.size();i++){
            mp[it[i]-'a'] = 1;
            // unite with previous
            int a = find(it[i]-'a');
            int b = find(it[i-1]-'a');
            if(a == b) continue;
            if(value[b] < value[a]) swap(a,b);
            // swapped lesser
            // cout << a << " " << b << '\n';
            value[b] += value[a];
            parent[a] = parent[b];
        }
    }
    int ans = 0;
    for(auto &it : mp){
        if(parent[it.first] == it.first) ans++;
    }
    cout << ans << '\n';
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
