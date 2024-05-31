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
    // chek l6
    for(int i = 1;i < n;i++){
        if(str[i] >= '0' && str[i] <= '9' && str[i-1] >= 'a' && str[i-1] <= 'z'){
            cout << "NO" << "\n";
            return;
        }
    }
    string str1;
    string str2;
    for(int i = 0;i < n;i++){
        if(str[i] >= 'a' && str[i] <= '9') str1 += str[i];
        else str2 += str[i];
    }
    string s = str1;
    string t = str2;
    sort(all(s));sort(all(t));
    if(str1 != s){
        cout << "NO" << "\n";
        return;
    }
    if(str2 != t){
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
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
