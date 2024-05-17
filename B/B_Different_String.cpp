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
    set<char> st;
    string str;
    cin >> str;
    for(int i = 0;i < str.size();i++){
        st.insert(str[i]);
    }
    if(st.size() == 1){
        cout << "NO" << "\n";
    }else{
        char a = *st.begin();
        char b = *st.rbegin();
        bool f1 = true;
        bool f2 = true;
        for(int i = 0;i < str.size();i++){
            if(str[i] == a && f1){
                str[i] = b;
                f1 = false;
            }else if(str[i] == b && f2){
                str[i] = a;
                f2 = false;
            }
        }
        cout << "YES" << "\n";
        cout << str << "\n";
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
