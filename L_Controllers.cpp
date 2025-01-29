/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
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

int predicate(int plus,int minus,int a,int b){
    return (plus*a - minus*b);
}

void init_1(){
    int n;
    cin >> n;
    vector<char> sym(n);
    input(sym);
    int plus = 0;
    int minus = 0;
    for(int i = 0;i < n;i++){
        if(sym[i] == '+') plus++;
        else minus++;
    }
    if(plus>minus) swap(plus,minus);
    int q;
    cin >> q;
    for(int i = 0;i < q;i++){
        int a,b;
        cin >> a >> b;
        if(a<b) swap(a,b);
        int low = 0;
        int high = plus;
        while(high - low > 1){
            int mid = (high + low)/2;
            int val = predicate(mid,minus-(plus-mid),a,b);
            if(val == 0){
                cout << "YES" << "\n";
                goto end;
            }else if(val < 0){
                low = mid;
            }else{  
                high = mid;
            }
        }
        if(predicate(high,minus-(plus-high),a,b) == 0){
            cout << "YES" << "\n";
            continue;
        }
        if(predicate(low,minus-(plus-low),a,b) == 0){
            cout << "YES" << "\n";
            continue;
        }
        cout << "NO" << "\n";
        end:
        continue;
    }
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
