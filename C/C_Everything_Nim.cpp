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
    int ans = 1;
    set<int> st;
    for(int i = 0;i < n;i++){
        st.insert(a[i]);
    }
    if(st.size() == 1){
        cout << "Alice" << "\n";
        return;
    }
    vector<int> b;
    for(auto &it : st){
        b.push_back(it);
    }
    vector<int> d;
    d.push_back(b[0]);
    for(int i = 0;i < b.size()-1;i++){
        d.push_back(b[i+1]-b[i]);
    }
    for(int i = b.size()-2;i >= 0;i--){
        if(d[i] == 1) ans = ans^1;
        else ans = 1;
    }
    if(ans){
        cout << "Alice" << "\n";
    }else{
        cout << "Bob" << "\n";
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
