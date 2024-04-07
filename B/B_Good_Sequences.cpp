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
    set<int> st;
    st.clear();
    for(int i = 0;i < n;i++){
        st.insert(a[i]);
        auto it = st.upper_bound(a[i]);
        if(it != st.end()){
            st.erase(st.lower_bound(a[i]));
        }else{
            auto lst = st.rbegin();
            if(st.size() == 1) continue;
            lst--;
            int val = __gcd(*lst,a[i]);
            if(val == 1) st.erase(st.lower_bound(a[i]));
        }
    }
    cout << st.size() << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
