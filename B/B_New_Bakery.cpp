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
    // n,a,b;
    int n,a,b;
    cin >> n >> a >> b;
    if(b<=a){
        cout << n*a << '\n';
        return;
    }
    // finding the idx
    int idx = b-a;
    if(idx >= n){
        // all b
        cout << (n-1+1)*b - ((n-1)*(n-1+1))/2 << "\n";
        return;
    }
    // b-0 b-1 b-2 // 11-5 = 6 --> 7 5
    // idx+1 to n-1
    // a*(n-1-(idx+1)+1)
    cout << (idx+1)*b - ((idx)*(idx+1))/2 + a*(n-1-(idx+1)+1) << "\n";
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

// 5 5 11
// 11 10 9 8 7
// b-i = 5
// b-5=i