/*Jai Bajrang Bali*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    int n;
    cin >> n;
    vector<int> a(n);
    input(a);
    map<int,int> mp;
    for(auto &it : a){
        mp[it]++;
    }
    vector<int> b;
    vector<int> pi;
    int lst = 0;
    for(auto &it : mp){
        pi.push_back(lst + it.second);
        b.push_back(it.second);
        lst = lst + it.second;
    }
    int ans = 0;
    for(int i = b.size()-1;i >= 0;i--){
        if(b[i] >= 2){ // candidate for c
            int op1 = (i == 0) ? 0 : (((b[i])*(b[i]-1))/2)*(pi[i-1]); //mapc2*pref[i-1]
            int op2 =  (b[i] >= 3) ? ((b[i])*(b[i]-1)*(b[i]-2))/6 : 0;
            ans += (op1 + op2);
        }
    }
    cout << ans << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}