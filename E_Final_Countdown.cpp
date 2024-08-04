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
    string str;
    cin >> str;
    vector<int> pi(n+1,0);
    for(int i = 0;i < n;i++){
        pi[i+1] = pi[i] + (str[i]-'0');
    }
    int idx = n;
    long long carry = 0;
    string ans;
    while(idx!=0){
        int num = carry + pi[idx];
        // cout << num << "\n";
        ans += (char)('0'+num%10);
        // cout << ans << '\n';
        carry = num/10;
        idx--;
    }
    reverse(all(ans));
    if(carry!=0) ans = to_string(carry)+ans;
    string realAns = "0";
    int j = 0;
    while((j<ans.size()) && (ans[j] == '0')) j++;
    if(j<ans.size()){
        realAns = "";
        for(int i = j;i < ans.size();i++) realAns += ans[i];
    }
    cout << realAns << "\n";
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
