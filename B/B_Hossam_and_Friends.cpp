/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
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
    int n,m;
    cin >> n >> m;
    int i = 1;
    int j = 1;
    int size = n;
    vector<int> nf(n+2,n+1);
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        if(b<a) swap(a,b);
        nf[a] = min(nf[a],b);
    }
    int ans = 0;
    multiset<int> st;
    // print(nf);
    while(j <= size){
        st.insert(nf[j]);
        // shift 
        if(j==(*st.begin())){
            // shift the i
            while(!st.empty() && j==(*st.begin())){
                st.erase(st.lower_bound(nf[i]));
                i++;
            }
            // cout << 1 << " self" << "\n";
            ans += (j-i+1);
            // shift the window
            j++;
        }else{
            // cout << j-i+1 << "\n";
            ans += (j-i+1);
            // shift the window
            j++;
        }
    }
    // calculate the final values
    // ans += (n-i+1);
    cout << ans << '\n'; 
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
