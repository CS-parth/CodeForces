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
     vector<int> a(n);
     input(a);
     int mn = -1e18;
     int mx = 1e18;
     vector<int> b = a;
     sort(all(b));
     if(a==b){
        cout << 0 << "\n";
        return;
     }
     for(int i = 1;i < n;i++){
        if(a[i]==a[i-1]) continue;
        if(a[i] > a[i-1]){
            int diff = a[i]-a[i-1];
            // a[i-1] + diff/2 se niche
            mx = min(mx,a[i-1] + diff/2);
        }else{
            int diff = a[i-1] - a[i];
            // a[i-1] + diff/2 se upar
            mn  = max(mn,a[i-1] - diff/2);
        }
     }
    //  cout << mn << " " << mx << '\n';
     if(mn>mx){
        cout << -1 << "\n";
     }else{
        cout << mn << "\n";
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
