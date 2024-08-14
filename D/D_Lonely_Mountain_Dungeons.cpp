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
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> v(n);
    input(v);
    auto nc2 = [](int n)->long long{
        if(n<=1) return 0;
        return (n*(n-1))/2ll;
    };
    int mx = *max_element(all(v));
    vector<int> store(mx+1);
    vector<int> add(mx+2,0);
    for(int i = 0;i < n;i++){
        int val = 0;
        for(int j = 1;j <= v[i];j++){
            int rem = v[i]%j;
            int q = v[i]/j;
            val = nc2(v[i]) - (rem*nc2(q+1) + (j-rem)*nc2(q));
            store[j] += val;
        }
        add[v[i]+1] += val;
    }
    int ans = 0;
    for(int i = 1;i <= mx;i++){
        add[i] = add[i] + add[i-1];
    }
    // print(store);
    // print(add);
    for(int i = 1;i <= mx;i++){
        ans = max(ans,(add[i]+store[i])*a - b*(i-1));
    }
    cout << ans << '\n';
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
