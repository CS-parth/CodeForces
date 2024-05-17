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
    string str;
    cin >> str;
    // cout << str << "\n";
    vector<int> a;
    vector<int> b;
    int n = str.size();
    // cout << 1 << "\n";
    for(int i = 0;i < n;i++){
        // cout << 0 << "\n";
        int cnt = 0;
        bool f = false;
        while(i < n && str[i] == '1'){
            cnt++;
            i++;
            f = true;
        }
        if(f) i--;
        if(cnt != 0){
            int prev = (a.empty()) ? 0 : a.back();
            a.push_back(cnt + prev);
        }
    }
    for(int i = n-1;i >= 0;i--){
        int cnt = 0;
        bool f = false;
        while(i >= 0 && str[i] == '0'){
            cnt++;
            i--;
            f = true;
        }
        if(f) i++;
        if(cnt != 0 && a.size() != b.size()){
            b.push_back(cnt);
        }
        if(cnt == 0 && a.size() != b.size() && b.empty()){
            b.push_back(cnt);
        }
    }
    reverse(b.begin(),b.end());
    int ans = 0;
    // print(a);
    // print(b);
    for(int i = 0;i < a.size();i++){
        ans += ((a[i]+1)*b[i]);
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
