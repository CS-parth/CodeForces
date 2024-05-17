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
    vector<int> a(n);
    input(a);
    int l = 0; //possible
    int r = 1e18;  //not possisble
    while(r-l > 1){
        int mid = (r-l)/2+l;
        // let mid be the anser cout << mid << "\n"; k+1kkkkk+1--> k*n-(n-1)+2 = (mid-2+(n-1))/n
        // so mid+1 mid mid mid mid mid+1 --> (mid*n-1) + 2 1234123412
        int coins = k;
        for(int i = 0;i < n;i++){   
            if(a[i] < mid){
                coins-=(mid-a[i]);
                if(coins < 0) break;
            }
        }
        if(coins < 0){
            r = mid;
        }else{
            l = mid;
        }
    }
    // check more after l*n-(n-1)
    int coins = k;
    int cnt = 0;
    for(int i = 0;i < n;i++){   
        if(a[i] <= l){
            coins-=(l-a[i]);
        }else{
            
            cnt++;
        }
    }
    cout << n*l-(n-1) + cnt+coins << "\n";
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
