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
    int i,j;
    cout << n << " " << 1 << "\n";
    cout << n << " " << 2 << "\n";
    i = n;j = 2;
    int di[]= {-1,0,1,0};
    int dj[] = {0,1,0,-1};
    int k = n-2;
    int idx = 0;
    while(k--){
        // cout << k << " " << di[idx] << " " << dj[idx] << "\n";
        int ni = i + (k+2)*di[idx];
        int nj = j + (k+2)*dj[idx];
        cout << ni << " " << nj << "\n"; 
        i = ni;
        j = nj;
        idx++;
        idx = (idx)%4;
    }
    cout << "\n";
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
