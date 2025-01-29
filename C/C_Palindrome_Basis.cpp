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

vector<int> vec;
vector<vector<int>> dp;

int rec(int idx,int j){
    if(idx == 0) return 1;
    if(idx < 0) return 0;
    if(j == vec.size() || vec[j] > idx) return 0;
    if(dp[idx][j] != -1) return dp[idx][j];
    int ans = rec(idx,j+1); // skip
    ans += rec(idx-vec[j],j);
    dp[idx][j] = ans;
    return ans;
}

void init_1(){
    int n;
    cin >> n;
    cout << dp[n][0] << '\n';
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    for(int i = 1;i <= 4*1e4;i++){
        string str = to_string(i);
        bool isPalindrome = true;
        int x = 0;
        int y = str.size()-1;
        while(x<=y){
            if(str[x] != str[y]){
                isPalindrome = false;
                break;
            }
            x++;
            y--;
        }
        if(isPalindrome){
            vec.push_back(i);
        }
    }
    // dp[idx][0] --> total count of the diff comb such that starting from idx and collecting 0
    // dp[idx][j] --> take 0 to max
    // cout << vec[end] << '\n';
    dp = vector<vector<int>>(4*1e4+1,vector<int>(vec.size()+1,0));
    int n = 4*1e4;
    for(int i = 0;i <= n;i++){
        for(int j = vec.size()-1;j >= 0;j--){
            if(i == 0) {
                dp[i][j] = 1;
                continue;
            }
            int cnt = 1;
            int ans = dp[i][j+1];
            while(cnt*vec[j] <= i){ 
                cout << vec[j] << '\n';
                ans += dp[i-(cnt*vec[j])][j+1];
                cnt++;
            }
            dp[i][j] = ans;
        }
    }
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
