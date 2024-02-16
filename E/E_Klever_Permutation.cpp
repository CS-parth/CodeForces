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
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    int n,k;
    cin >> n >> k;
    vector<int> ans(n);
    int cnt = 1;
    for(int i = 0;i < k;i+=2){
        for(int j = i;j < n;j+=k){
            ans[j] = cnt++;
        }
    }
    cnt = n;
    for(int i = 1;i < k;i+=2){
        for(int j = i;j < n;j+=k){
            ans[j] = cnt--;
        }
    }
    for(int i = 0;i < n;i++){
        cout << ans[i] << " ";
    }cout << '\n';
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
