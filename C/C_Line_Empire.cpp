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
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> vec(n);
    input(vec);
    // a to change
    // b to jump
    int start = 0;
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(i == 0) ans += b*vec[i];
        else{
            // either jump or change and jump
            int op1 = b*(vec[i] - start);
            int op2 = a*(vec[i-1] - start) + b*(vec[i] - vec[i-1]);
            if(op2 <= op1) {
                start = i-1;
                ans += op2;
            } else {
                ans += op1;
            }
        }
    }
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
