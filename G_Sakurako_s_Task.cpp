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

int check(int g,int val,int k,int n){
    if(val%g== 0){
            int _k = val - min(val/g,n-1);
            if(_k == k){
                if(min(val/g,n-1)>=val){
                    return val-1;
                }else{
                    return val;
                }
            }
    }else{
        int _k = val - min(val/g,n-1);
        if(_k == k){
            return val;
        }
    }
    return -1;
}


void init_1(){
     int n,k;
     cin >> n >> k;
     vector<int> v(n,0); 
     input(v);
     if(n == 1){
        cout << k-1 << '\n';
        return;
     }
     int low = 0;
     int high = 20;
     int g = 0;
     for(int i = 0;i < n;i++){
        g = __gcd(v[i],g);
     }
    //  cout << g << "\n";
     while(high - low > 1){
        int mid = (low + high) / 2;
        // cout << low << " " << high << '\n';
        if(mid%g == 0){
            int _k = mid - min(mid/g,n-1);
            // cout << "_k " << _k << "\n"; 
            if(_k == k){
                if(min(mid/g,n-1)>=mid){
                    cout << mid-1 << "\n";
                }else{
                    cout << mid << '\n';
                }
                return;
            }
            if(_k > k){
                high = mid;
            }else{
                low = mid;
            }
        }else{
            int _k = mid - min(mid/g,n-1);
            // cout << "_k " << _k << "\n";
            if(_k == k){
                cout << mid << "\n";
                return;
            }
            if(_k > k){
                high = mid;
            }else{
                low = mid;
            }
        }
     }  
     if(check(g,low,k,n) != -1){
        cout << check(g,low,k,n);
        return;
     }
     if(check(g,high,k,n) != -1){
        cout << check(g,high,k,n);
        return;
     }
     cout << -1 << "\n";
     return;
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
