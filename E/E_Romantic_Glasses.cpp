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
    vector<int> pi(n);
    pi[0] = -a[0];
    bool f = true;
    for(int i = 1;i < n;i++){
        // cout << f << "\n";
        if(f == true){
            pi[i] = pi[i-1] + a[i];
        }else{
            pi[i] = pi[i-1] - a[i];
        }
        f = f^true;
    }
    // print(pi);
    set<int> st;
    st.insert(0);
    for(int i = 0;i < n;i++){
        // cout << pi[i] << "\n";
        if(st.count(pi[i])){
            cout << "YES" << "\n";
            return;
        }
        // f = !f;
        st.insert(pi[i]);
    }
    cout << "NO" << "\n";
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
