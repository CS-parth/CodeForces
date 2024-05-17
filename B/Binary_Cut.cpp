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
    unordered_map<int,int> mp;
    for(int i = 0;i < str.size();i++){
        // cout << 1 << "\n";
        if(str[i] == '0'){
            int j = i;
            while(j < str.size() && str[j] == '0'){
                j++;
            }   
            while(j < str.size() && str[j] == '1'){
                j++;
            }
            int len = j-i;
            mp[i] = len;
        }
    }
    if(mp.empty()){
        cout << 1 << "\n";
        return;
    }
    int start = 0;
    int mx = 0;
    for(auto &it : mp){
        if(it.second >= mx){
            start = it.first;
            mx = max(mx,it.second);
        }
    }
    // cout << start << "\n";
    int close = start + mp[start] - 1;
    int pieces = 1;
    int i = 0;
    while(i < start){
        if(str[i] == '0'){
            while(i < start && str[i] == '0'){
                i++;
            }
            pieces++;
            // i--;
        }else if(str[i] == '1'){
            while(i < start && str[i] == '1'){
                i++;
            }
            pieces++;
            // i--;
        }else{
            i++;
        }
    }
    i = close+1;
    while(i < str.size()){
        if(str[i] == '0'){
            while(i < str.size() && str[i] == '0'){
                i++;
            }
            pieces++;
            // i--;
        }else if(str[i] == '1'){
            while(i < str.size() && str[i] == '1'){
                i++;
            }
            pieces++;
            // i--;
        }else{
            i++;
        }
    }
    cout << pieces << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        // cout << k << "\n";
        init_1();  
    }
}
