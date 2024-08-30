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

int nCr(int n,int r){
    if(n-r < 0) return 0;
    int num = fact[n];
    int deno = fact[n-r]*fact[r];
    return (num*(long long)pow(deno,MOD-2))%MOD;
}

int expoMod(int a,int b){
    int res = 1;
    while(b){
        if(b&1){
            res = (res*a)%MOD;
            b--;
        }
        a = (a*a)%MOD;
        b /= 2;
    }
    return res%MOD;
}
void init_1(){
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    input(a);
    int ans = 0;
    int i = 0;
    int j = 0;
    set<int> st(all(a));
    vector<int> b(all(st));
    vector<int> c(b.size(),0);
    map<int,int> mp;
    for(int i = 0;i < n;i++) mp[a[i]]++;
    for(int i = 0;i < b.size();i++) c[i] = mp[b[i]];
    int size = b.size();
    int mul = 1;
    while(j<size){
        mul = (mul*c[j])%MOD;
        if((j-i+1)<k){
            if(i!=j && (b[j]!=b[j-1]+1)){
                // cout << "Changing at " << i << " " << j << "\n";
                if(i==j){
                    i++;
                    j++;
                }else{
                    i = j;
                }
                mul = 1;
            }else{
                j++;
            }
        }else{
            if(b[j]-b[i]+1 != k){
                // cout << "Changing at " << i << " " << j << "\n";
                if(i==j){
                    i++;
                    j++;
                }else{
                    i = j;
                }
                mul = 1;
            }else {
                ans = (ans + mul)%MOD;
                mul = (mul*expoMod(c[i],MOD-2))%MOD;
                i++;
                j++;
            }
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
