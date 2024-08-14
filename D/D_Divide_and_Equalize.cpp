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

vector<bool> isPrime(1e6+1,true);
vector<int> primes;
void init_1(){
    int n;
    cin >> n;
    vector<int> a(n);
    input(a);
    map<int,int> mp;
    auto fill = [&](int num){
        for(int i = 2;i*i <= num;i++){
            while(num%i == 0){
                num/=i;
                mp[i]++;
            }
            if(num == 1) break;
        }
        if(num!=1) mp[num]++;
    };
    for(int i = 0;i < n;i++){
        fill(a[i]);
    }
    for(auto [key,value] : mp){
        if((value%n) != 0){
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    // isPrime[0] = isPrime[1] = false;
    // for(int i = 2;i*i <= 1e6;i++){
    //     if(isPrime[i]){
    //         for(int j = i*i;j <= 1e6;j+=i){
    //             isPrime[j] = false;
    //         }
    //     }
    // }
    // for(int i = 0;i <= 1e6;i++){
    //     if(isPrime[i]) primes.push_back(i);
    // }
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
