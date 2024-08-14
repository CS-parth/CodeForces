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
vector<bool> isPrime(1e7+1,true);
void init_1(){
    int l,r;
    cin >> l >> r;
    function<vector<int>(int)> res = [](int num)->vector<int>{
        for(int i = 2;i*i<=num;i++){
            if((num%i) == 0){
                return {i,num-i};
            }
        }
        return {-1};
    };
    // only check l and l+1
    vector<int> ans;
    for(int i = l;i <= r;i++){
        if(isPrime[i]==false && i!=0 && i!=1){
            ans = res(i);
            cout << ans[0] << " " << ans[1] << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    isPrime[0] = isPrime[1] = false;
    for(int i = 2;i*i<=1e7;i++){
        if(isPrime[i]){
            for(int j = i*i;j<=1e7;j+=i){
                isPrime[j] = false;
            }
        }
    }
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
