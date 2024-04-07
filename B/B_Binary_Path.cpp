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

int n;
vector<string> a;
unordered_map<string,string> dp;
string dfs(int i,int j){
    if(i == 1 && j == n-1){
        string str = "";
        str += a[i][j];
        return str;
    }

    if(dp.count(to_string(i)+"$"+to_string(j))) return dp[to_string(i)+"$"+to_string(j)];
    
    // down
    string op1 = "";
    op1 += a[i][j];
    // cout << op1 << "\n";
    op1 += (i+1 < 2) ? dfs(i+1,j) : "2";

    // right
    string op2 = "";
    op2 += a[i][j];

    op2 += (j+1 < n) ? dfs(i,j+1) : "2";

    // cout << op1 << " " << op2 << '\n';
    string ans = (op1 < op2) ? op1 : op2;  
    // ans += a[i][j];
    return dp[to_string(i)+"$"+to_string(j)] = ans;
}

void init_1(){
    int _n;
    cin >> _n;
    n = _n;
    string str1;
    string str2;
    cin >> str1;
    cin >> str2;
    a.emplace_back(str1);
    a.emplace_back(str2);
    cout << dfs(0,0) << "\n";
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
