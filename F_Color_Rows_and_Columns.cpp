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

int n;
vector<pair<int,int>> v;
vector<vector<int>> dp;
int rec(int idx, int k){
    if(idx == n){
        return (k==0) ? 0 : 1e9;
    }
    if(dp[idx][k] != -1) return dp[idx][k];
    int x = v[idx].first;
    int y = v[idx].second;
    int p = 0;
    int cnt = 1;
    if(x>y) swap(x,y);
    int op = 0; // find operation to take k-j point from the current config 
    int ans = op + rec(idx+1,k);
    bool f = true;
    for(int j = k-1;j >= max(0ll,k-v[idx].first-v[idx].second);j--){ // last we can go is ai+bi
        // cout << x << " " << y << '\n';
        if(x==y && f) {
            p = x;
            f = false;
        }
        // Even this is incremental 
        if(x!=y){
            op += x;
            y--;
        }else{
            if(cnt&1){
                op += p;
            }else{
                op += p*2 - 1 - p;
                p--;
            }
            cnt++;
        }
        // cout << "op " << op << " " << j << '\n';
        ans = min(ans,op + rec(idx+1,j));
    }
    dp[idx][k] = ans;
    return ans;
}
void init_1(){
    int k;
    cin  >> n >> k;
    v = vector<pair<int,int>>(n,{0,0});
    dp = vector<vector<int>> (n+1,vector<int>(k+1,-1));
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        v[i] = {x,y};
    }
    int ans = rec(0,k);
    cout << ((ans >= 1e9) ? -1 : ans) << '\n';
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
