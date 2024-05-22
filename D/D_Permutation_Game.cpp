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
    int n,k,b,s;
    cin >> n >> k >> b >> s;
    vector<int> p(n);
    vector<int> a(n);
    input(p);input(a);
    // graph from b and graph from s 
    vector<int> fromb;
    vector<int> froms;
    vector<bool> vis;
    function<void(int)> dfsb = [&](int node)->void{
        if(vis[node]) return;
        fromb.push_back(node-1);
        vis[node] = true;
        dfsb(p[node-1]);
    };
    function<void(int)> dfss = [&](int node)->void{
        if(vis[node]) return;
        froms.push_back(node-1);
        vis[node] = true;
        dfss(p[node-1]);
    };
    vis.assign(n+1,false);
    dfsb(b);
    vis.assign(n+1,false);
    dfss(s);
    int scoreb = 0;
    int prev = 0;
    for(int i = 0;i < fromb.size();i++){
        if(k < i+1) break;
        int temp = prev+a[fromb[i]];
        prev = temp;
        int cnt = k-(i+1);
        temp += (cnt)*a[fromb[i]];
        scoreb = max(scoreb,temp);
    }
    int scores = 0;
    prev = 0;
    for(int i = 0;i < froms.size();i++){
        if(k < i+1) break;
        int temp = prev+a[froms[i]];
        prev = temp;
        int cnt = k-(i+1);
        temp += (cnt)*a[froms[i]];
        scores = max(scores,temp);
    }
    if(scoreb > scores){
        cout << "Bodya" << "\n";
    }else if(scores > scoreb){
        cout << "Sasha" << "\n";
    }else{
        cout << "Draw" << "\n";
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
