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
    int k;
    cin >> n >> k;
    vector<int> a(n);
    input(a);
    if(k > 2){
        cout << 0 << "\n";
        return;
    }
    int mn = 1e18;
    for(int i = 0;i < n;i++){
        mn = min(mn,a[i]);    
    }   
    sort(all(a));
    for(int i = 0;i < n;i++){
        for(int j = i+1;j<n;j++){
            mn = min(mn,abs(a[i]-a[j]));
        }
    }
    if(k == 1){
        cout << mn << "\n";
        return;
    }
    for(int i = 0;i < n;i++){
        for(int j = i+1;j < n;j++){
            int diff = abs(a[i]-a[j]);
            auto itr = lower_bound(all(a),diff);
            if(itr != a.end()){
                mn = min(abs(diff-*itr),mn);
            }
            --itr;
            if(itr != a.end()){
                mn = min(abs(diff-*itr),mn);
            }
            ++itr;
            ++itr;
            if(itr != a.end()){
                mn = min(abs(diff-*itr),mn);
            }
        }
    }
    cout << mn << "\n";
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
