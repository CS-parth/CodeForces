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
vector<int> factorials;
map<int,vector<int>> dp;
int rec(int num,int idx){
    if(!dp.count(num)) dp[num] = vector<int>(factorials.size(),-1);
    if(idx == factorials.size()){
        return set_bits(num);
    }
    if(dp[num][idx]!=-1) return dp[num][idx];
    int ans = rec(num,idx+1);
    if(factorials[idx] <= num){
        ans = min(ans,1 + rec(num-factorials[idx],idx+1));
    }
    dp[num][idx]=ans;
    return ans;
}
 
void init_1(){   
    int n;
    cin >> n;
    cout << rec(n,0) << '\n';
}
 
signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    factorials.clear();
    // dp.clear();
    int res = 6;
    int idx = 4;
    while(res <= 1e12){
        factorials.push_back(res);
        res = res*(idx++);
    }
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}