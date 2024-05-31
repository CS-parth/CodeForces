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
    input(a);
    vector<int> b(n+1);
    input(b);
    unordered_map<int,pair<int,int>> mp;
    int sum = 0;
    for(int i = 0;i < n;i++){
        // convert to last
        // case one when the a[i] lies in between
        int op1 = abs(a[i]-b[i]);
        int op2 = abs(a[i]-b[n]);
        int op3 = abs(b[i]-b[n]);
        mp[i] = {max({op1,op2,op3})+1,abs(a[i]-b[i])};
        sum += mp[i].second;
    }
    int ans = 1e15;
    for(int i = 0;i < n;i++){
        ans = min(ans,mp[i].first + sum - mp[i].second);
    }
    cout << ans << "\n";
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
