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

vector<int> st;
unordered_map<int,int> mp;
void init_1(){
    auto isBinary = [](string str){
        for(int i = 0;i < str.size();i++){
            if((str[i] == '1') || (str[i] == '0')) continue;
            else return false;
        }
        return true;
    };
    int n;
    cin >> n;
    if(isBinary(to_string(n))){
        cout << "YES" << "\n";
        return;
    }
    for(int idx = st.size()-1;idx>=0;idx--){
        if((n%st[idx]) == 0){
            n = (n/st[idx]);
            if(st[idx] != 1) idx++;
        }
        // cout << n << "\n";
        if(n == 1){
            cout << "YES" << "\n";
            return;
        }
    }
    if(isBinary(to_string(n))){
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    auto isBinary = [](string str){
        for(int i = 0;i < str.size();i++){
            if((str[i] == '1') || (str[i] == '0')) continue;
            else return false;
        }
        return true;
    };
    for(int i = 1;i <= 1e5;i++){
        if(isBinary(to_string(i)) == true) st.emplace_back(i);
    }
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
