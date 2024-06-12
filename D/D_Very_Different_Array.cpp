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
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    input(a);
    input(b);
    sort(all(a));
    sort(all(b),greater<int>());
    vector<int> bpi(m,0);
    for(int i = m-n;i < m;i++){
        int val = (i!=0) ? bpi[i-1] : 0;
        bpi[i] = val + abs(b[i]-a[i-(m-n)]);
    }
    // print(bpi);
    int i = 0;
    int j = 0;
    int size = m;
    int D = 0;
    int ans = 0;
    if(n==m){
        cout << bpi[n-1] << "\n";
        return;
    }
    while(j < size){
        // cal
        if(j-i+1 < m-n){
            j++;
        }else{
            // answer
            // cout << D << " " << bpi[m-1]  << " " << bpi[j] << "\n";
            ans = max(D+bpi[m-1]-bpi[j],ans);
            // remove 
            D += abs(a[i]-b[i]);
            i++;
            j++;
        }
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
