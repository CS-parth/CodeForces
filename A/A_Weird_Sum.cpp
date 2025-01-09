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
    int n,m;
    cin >> n >> m;
    vector<vector<int>> mat(n,vector<int>(m,0));
    for(int i = 0;i < n;i++){
        input(mat[i]);
    }
    map<int,multiset<int>> xs;
    map<int,multiset<int>> ys;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            xs[mat[i][j]].insert(i);
            ys[mat[i][j]].insert(j);
        }
    }
    int ans = 0;
    for(auto &it : xs){
        // cout << it.first << '\n';
        // print(it.second);
        int total = 0;
        for(auto &itr : it.second) total += itr;
        int n = it.second.size();
        int idx = 0;
        int sum = 0;
        int op = 0;
        for(auto &itr : it.second){
            total -= itr; 
            int op1 = (idx*itr - sum);
            int op2 = (total - (n-1-idx)*itr);
            ans += (op1+op2);
            sum += itr;
            idx++;
        }
    }
    for(auto &it : ys){
        int total = 0;
        for(auto &itr : it.second) total += itr;
        int n = it.second.size();
        int idx = 0;
        int sum = 0;
        for(auto &itr : it.second){
            total -= itr; 
            int op1 = (idx*itr - sum);
            int op2 = (total - (n-1-idx)*itr);
            ans += (op1 + op2);
            sum += itr;
            idx++;
        }
    }
    cout << ans/2 << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    int T = 1;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
