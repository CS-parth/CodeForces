/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
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

int BS(vector<int> a,int n){
    int lo = -1;
    int hi = a.size()-1;
    while(hi > lo + 1){
        int mid = (hi-lo)/2 + lo;
        if(a[mid] >= n) hi = mid;
        else lo = mid;
    }
    return a[hi];
}
void init_1(){
    int x,n;
    cin >> x >> n;
    set<int> divisors;
    for(int i = 1;i*i <= x;i++){
        if((x%i) == 0){
            divisors.insert(i);
            divisors.insert(x/i);
        }
    }
    vector<int> v;
    for(auto &it : divisors){
        v.emplace_back(it);
    }
    int divisor = BS(v,n);
    cout << x/divisor << "\n";
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
