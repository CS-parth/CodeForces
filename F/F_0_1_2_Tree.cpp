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
    int a,b,c;
    cin >> a >> b >> c;
    if(c != a+1){
        cout << -1 << "\n";
        return;
    }
    // this will generate a+1 spaces
    int l = (a==0) ? -1 : log2(a); 
    int add = (pow(2,l) == (a-1)) ? 1 : 0;
    cout << add << "\n";
    if(b < a+1){
        cout << "from first" << " ";
        cout << l + 1 << "\n";
    }else{
        cout << "from second" << " ";
        cout << l + b/(a+1) + 1 + add << "\n";
    }
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
