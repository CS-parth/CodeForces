/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
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

int BS(long double val,long double prev){
    int low = 0;
    int high = 1e9;
    while(high-low>1){
        int mid = (high+low)/2;
        long double temp = val + mid;
        // cout << "temp : " << temp << "\n";
        if(temp >= prev){
            high = mid;
        }else{
            low = mid;
        }
    }
    if(val + low >= prev) return low;
    if(val + high >= prev) return high;
    return -1; 
}

void init_1(){
     int n;
     cin >> n;
     vector<double> a(n);
     input(a);
     vector<long double> b(n);
     for(int i = 0;i < n;i++){
        b[i] = (long double)(log2(a[i]));
     }
    //  print(b);
     int ans = 0;
     for(int i = 1;i < n;i++){
        int idx = BS(b[i],b[i-1]);
        ans += idx;
        b[i] += idx;
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
