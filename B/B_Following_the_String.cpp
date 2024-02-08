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
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    unordered_map<int,vector<char>> mp;
    int n;
    cin >> n;
    // cout << n << "\n";
    vector<int> a(n,0);
    // cout << n << "\n";
    input(a);
    char ch = 'a';
    string ans = "";
    for(int i = 0;i < n;i++){
        if(a[i] == 0){
            mp[0].push_back(ch);
            ans += ch;
            ch++;
        }else{
            char c = mp[a[i]-1].back();
            mp[a[i]-1].pop_back();
            mp[a[i]].push_back(c);
            ans += c;
        }
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
