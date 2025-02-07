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
     int sum = 0;
     for(int i = 0;i < n;i++) sum += a[i];
     vector<pair<int,int>> vec;
     vector<int> deg(n,0);
     vector<vector<int>> adj(n);
     for(int i = 0;i < n-1;i++){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        deg[x]++;
        deg[y]++;
     }
     for(int i = 0;i < n;i++){
        vec.push_back({a[i],deg[i]});
     }
     sort(all(vec));
     reverse(all(vec));
     int idx = 0;
     cout << sum << ' ';
     while(idx < vec.size()){
        if(vec[idx].second != 1) {
            int val = vec[idx].first;
            for(int i = 1;i < vec[idx].second;i++){
                cout << sum + val << ' ';
                sum += val;
            }
        }
        idx++;
     }
     cout << "\n";
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
