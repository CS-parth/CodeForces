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
    int n,k;
    cin >> n >> k;
    int temp = 0;
    int val = (n+1)/2;
    int prev = -1;
    int p = -1;
    while(temp < k){
        // cout << p << " " << prev << " " << temp << " " << val << "\n"; 
        p++;
        prev = temp;
        temp += val;
        n -= val;
        val = (n+1)/2;
    }
    // cout << prev << " " << p << "\n";
    k-=prev;
    cout << (int)pow(2,p)*(2*k-1) << "\n"; 
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
