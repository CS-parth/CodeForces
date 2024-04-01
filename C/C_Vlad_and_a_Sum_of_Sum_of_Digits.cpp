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

int pre[200001];
void init_1(){
    int n;
    cin >> n;
    cout << pre[n] << '\n';
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    pre[0] = 0;
    for(int i = 1; i <= 200000;i++){
        string str = to_string(i);
        int cnt = 0;
        for(int i = 0;i < str.size();i++){
            cnt += str[i]-'0';
        }
        pre[i] = (cnt+pre[i-1]);
    }
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
