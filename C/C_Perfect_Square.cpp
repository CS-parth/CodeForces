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
#define all(x) (x).begin(), (x).end()vector<int> mat(n);

#define int long long 
#define input(a) for (auto &x : a) cin >> x;
#define print(a) for (auto &x : a) cout << x << " ";cout << "\n";

void init_1(){
    int n;
    cin >> n;
    int mat[n][n];
    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            char ch;
            cin >> ch;
            mat[i][j] = ch;
        }
    }
    int ans = 0;
    for(int i = 0;i < n/2;i++){
        for(int j = 0;j < n/2;j++){
            char a = mat[i][j];
            char b = mat[j][n-1-i];
            char c = mat[n-1-j][i];
            char d = mat[n-1-i][n-1-j];
            // cout << a << " " << b << " " << c << " " << d << "\n"; 
            char e = max({a,b,c,d});
            ans += (e-a);
            ans += (e-b);
            ans += (e-c);
            ans += (e-d);
        }
    }
    cout << ans << "\n";
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
