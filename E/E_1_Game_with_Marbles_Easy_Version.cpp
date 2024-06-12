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
    vector<int> a(n);
    vector<int> b(n);
    input(a);input(b);
    int dp[(1<<n)][2];
    function<int(int,int,vector<int>,vector<int>)> rec = [&n, &dp,&rec](int mask, int turn, vector<int> vec1, vector<int> vec2)->int {
        if (mask == 0) {
            return 0;
        }
        if (dp[mask][turn] != -1) return dp[mask][turn];
        if (turn == 0) {
            int diff = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    vec1[i] -= 1;
                    vec2[i] = 0;
                    diff = max(rec(mask ^ (1 << i), turn ^ 1, vec1, vec2) + vec1[i], diff);
                }
            }
            return dp[mask][turn] = diff;
        } else {
            int diff = 1e9;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    vec1[i] = 0;
                    vec2[i] -= 1;
                    diff = min(diff, rec(mask ^ (1 << i), turn ^ 1, vec1, vec2) - vec2[i]);
                }
            }
            return dp[mask][turn] = diff;
        }
    };
    vector<int> vec1 = a;
    vector<int> vec2 = b;
    memset(dp,-1,sizeof(dp));
    cout << rec((1<<n)-1,0,vec1,vec2) << '\n';
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
