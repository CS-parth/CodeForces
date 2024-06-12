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
    int n;
    cin >> n;
    vector<int> bits(32,0);
    // cout << str << "\n";
    for(int i = 30;i >= 0;i--){
        if(n&(1<<i)) bits[i] = 1;
    }
    int i = 0;
    int j = 0;
    // print(bits);    
    // reverse(all(str));
    while(j < 32){
        if(bits[j] == 1) j++;
        else{
            // encountered a zero
            if(i==j){
                i++;
                j++;
            }else if(i+1==j){
                i+=2;
                j++;
            }else{
                bits[j] = 1;
                bits[i] = -1;
                for(int k = i+1;k < j;k++) bits[k] = 0;
                i = j;
            }
        }
    }
    // reverse(all(bits));
    cout << 32 << "\n";
    print(bits);
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
