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
    set<int> f;
    for(int i = 1;i*i <= n;i++){
        if((n%i) == 0){
            f.insert(n/i);
            f.insert(i);
        }
    }
    vector<int> fact(all(f));
    // sort(all(fact));
    // print(fact);
    for(int i = 0;i < fact.size();i++){
        int ok = n/fact[i];
        // take first i characters
        string s = "";
        for(int j = 0;j < fact[i];j++){
            s += str[j];
        }
        string temp = s;
        s = "";
        for(int j = 0;j < ok;j++) s+=temp;
        int cnt = 0;
        // cout << fact[i] << " " << s << " " << str << "\n";
        for(int i = 0;i < str.size();i++){
            if(s[i]!=str[i]) cnt++;
        }
        if(cnt == 0 || cnt == 1){
            cout << fact[i] << "\n";
            return;
        }
        s = "";
        int idx = 0 + ((ok)-1)*fact[i];
        // cout << idx << "\n";
        // cout << s << "\n";
        for(int j = idx;j<str.size();j++){
           s += str[j];
        }
        // cout << s << '\n';
        temp = s;
        s = "";
        for(int j = 0;j < ok;j++) s += temp;
        // cout << fact[i] << " " << s << " " << str << "\n";
        cnt = 0;
        for(int i = 0;i < str.size();i++){
            if(s[i] != str[i]) cnt++;
        }
        if(cnt == 0 || cnt == 1){
            cout << fact[i] << "\n";
            return;
        }
    }
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
