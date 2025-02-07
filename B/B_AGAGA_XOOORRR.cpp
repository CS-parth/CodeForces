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

vector<int> pi;
vector<vector<int>> dp;
int n;

bool rec(int idx,int bit,int val){
    if(bit == 31){
        return ((pi[idx]>>bit)==val) && (((pi[n-1]^pi[idx])>>bit)==val);
    }
    if(dp[bit][val]) return dp[bit][val];
    if( (pi[idx]>>bit)!=val || (((pi[n-1]^pi[idx])>>bit)!=val) ) return false;
    int ans = rec(idx,bit+1,0) || rec(idx,bit+1,1);
    dp[bit][val] = ans;
    return ans;
}

void init_1(){
    cin >> n;
    vector<int> a(n);
    input(a);
    map<pair<int,int>,set<int>> mp;
    pi = vector<int>(n,0);
    for(int i = 0;i < n;i++){
        if(i == 0) pi[i] = a[i];
        else {
            pi[i] = (a[i]^pi[i-1]);
        }
    }
    // print(pi);
    for(int i = 0;i < n-1;i++){
        if(pi[i] == (pi[n-1]^pi[i])) {
            cout << "YES" << '\n';
            return;
        }
        for(int j = i+1;j < n-1;j++){
            int op1 = pi[i];
            int op2 = pi[j]^pi[i];
            int op3 = pi[n-1]^pi[j];
            if((op1 == op2) && (op2 == op3)){
                cout << "YES" << '\n';
                return;
            }
        }
    }
    cout << "NO" << '\n';
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
