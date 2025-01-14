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

vector<int> fact;

int modExp(int a,int b){
    int res = 1;
    while(b){
        if(b&1) res = (res*a)%MOD;
        a = (a*a)%MOD;
        b = b/2;
    }
    return res%MOD;
}

int nCr(int n,int r){
    if(r>n) return 0;
    int num = fact[n];
    int deno = (fact[r]*fact[n-r])%MOD;
    return (num*modExp(deno,MOD-2))%MOD;
}

void init_1(){
    int n;
    cin >> n;
    vector<int> a(n);
    input(a);
    map<int,int> mp;
    for(int i = 0;i < n;i++) mp[a[i]]++;
    int ans = 0;
    int val = a[0];
    for(int i = 1;i < n;i++){
        val = val&a[i];
    }
    ans = (ans + ((2*nCr(mp[val],2))%MOD*fact[n-2])%MOD)%MOD;
    cout << ans << '\n';
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    fact.push_back(1);
    for(int i = 0;i <= 2*1e5;i++){
        fact.push_back((fact[i]*(i+1))%MOD);
    }
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
