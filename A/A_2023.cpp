/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    input(a);
    int prod = 1;
    for(int i = 0;i < a.size();i++){
        prod *= a[i];
        if(prod > 2023){
            cout << "NO" << "\n";
            return;
        }
    }
    if(2023%prod == 0){
        cout << "YES" << "\n";
        cout << 2023/prod << " ";
    }else{
        cout << "NO" << "\n";
        return;
    }
    for(int i = 0;i < k-1;i++){
        cout << 1 << " ";
    }cout << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
