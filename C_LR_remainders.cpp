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
    input(a);
    string str;
    cin >> str;
    vector<int> ans(n);
    vector<int> store(n);
    int i = 0;
    int j = n-1;
    for(int k = 0;k < n;k++){
        if(str[k] == 'R'){
            store[k] = a[j--];
        }else{
            store[k] = a[i++];
        }
    }
    int val = 1;
    // print(store);
    for(i = n-1;i >= 0;i--){
        val = ((val%m)*(store[i]%m))%m;
        ans[i] = val;
    }
    print(ans);
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
