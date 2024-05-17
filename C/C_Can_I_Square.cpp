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

unordered_map<int,bool> mp;
void init_1(){
    int x;
    cin >> x;
    vector<int> a(x);
    input(a);
    int sum = 0;
    for(int i = 0;i < x;i++) sum += a[i];
    int l = 0;
    int r = 1e13;
    while(r-l > 1){
        int mid = ((r-l)/2)+l;
        long long p = mid*mid;
        if(p < sum && p>0){
            l = mid;
        }else{
            r = mid;
        }
    }
    // r is the asnwer
    if(r*r == sum){
        cout << "YES" << "\n";
    }else{
        cout << "NO" << "\n";
    }
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
