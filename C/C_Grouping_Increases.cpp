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

void init_1(){
    int n;
    cin >> n;
    vector<int> v(n);
    input(v);
    int ans = 0;
    vector<int> a;
    vector<int> b;
    a.push_back(INF);
    b.push_back(INF);
    for(int i = 0;i < n;i++){
        if(a.back() == b.back()){
            if(a.back() < v[i]){
                ans++;
            }
            a.push_back(v[i]);
            continue;
        }
        if(a.back() < b.back()){
            if(v[i] > b.back()){
                ans++;
                a.push_back(v[i]);
            }else if(v[i] <= a.back()){
                a.push_back(v[i]);
            }else{
                b.push_back(v[i]);
            }
        }else{
            if(v[i] > a.back()){
                ans++;
                b.push_back(v[i]);
            }else if(v[i] <= b.back()){
                b.push_back(v[i]);
            }else{
                a.push_back(v[i]);
            }
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
