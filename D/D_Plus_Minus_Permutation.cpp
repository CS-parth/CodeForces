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
    int n,x,y;
    cin >> n >> x >> y;
    
    auto forw = [](int val){
        return (val*(val+1))/2;
    };
    auto back = [forw,n](int val){
        return forw(n)-forw(n-val);
    };
    // // on x on y on lcm(x,y)
    int x_cnt = n/x;
    int y_cnt = n/y;
    int lcm_cnt = n/lcm(x,y);
    int x_val = back(x_cnt);
    // cout << x_val << "\n";
    int y_val = forw(y_cnt);
    // cout << y_val << "\n";
    // remove lcm_cnt pi_back and pi_forwd from x_idx and y_idx
    if((x_cnt-lcm_cnt)>0){
        x_val -= (back(x_cnt)-back(x_cnt-lcm_cnt));
    }else{
        x_val -= back(x_cnt);
    }
    if((y_cnt-lcm_cnt)>0){
        y_val -= (forw(y_cnt)-forw(y_cnt-lcm_cnt));
    }else{
        y_val -= (forw(y_cnt));
    }
    cout << x_val - y_val << '\n';
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
