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

vector<int> fact;
int pw(int a, int b) {
	int64_t r = 1;
	while(b > 0) {
		if(b & 1) r = (r * a) % MOD;
		b /= 2;
		a = (a * a) % MOD; 
	}
	return r;
}
int nCr(int n,int r){
    if(n==r) return 1;
    if(r>n) return 0;
    return (fact[n]*pw((fact[n - r]*fact[r])%MOD,MOD-2))%MOD;
}
void init_1(){
     int n,k;
     cin >> n >> k;
     vector<int> a(n);
     input(a);
     fact.assign(n+1,0);
     fact[0] =  1;
     for(int i = 1;i <= n;i++){
        fact[i] = (fact[i-1]*i)%MOD;
     }
     int ones = 0;
     int zeroes = 0;
     for(int i = 0;i < n;i++){
        if(a[i] == 1){
            ones++;
        }else{
            zeroes++;
        }
     }
     int ans = 0;
     for(int one_cnt = (k/2)+1; one_cnt<=min(k,ones);one_cnt++){
        ans = (ans + ((nCr(ones,one_cnt))*(nCr(zeroes,k-one_cnt))%MOD))%MOD;
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
