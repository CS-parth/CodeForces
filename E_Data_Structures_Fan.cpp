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
    vector<int> a(n);
    input(a);
    string str;
    cin >> str;
    vector<int> xor_pi(n);
    for(int i = 0;i < n;i++){
        if(i==0) xor_pi[i] = a[i];
        else xor_pi[i] = a[i]^xor_pi[i-1];
    }
    int one = 0;
    int zero = 0;
    for(int i = 0;i < str.size();i++){
        if(str[i] == '0'){
            zero ^= a[i];
        }else{
            one ^= a[i];
        }
    }
    int q;
    cin >> q;
    while(q--){
        int type;
        cin >> type;
        if(type == 2){
            int x;
            cin >> x;
            if(x==1){
                cout << one << " ";
            }else{
                cout << zero << " ";
            }
        }else{
            int l,r;
            cin >> l >> r;
            l--;
            r--;
            int val = xor_pi[r];
            val = (l==0) ? val : val^xor_pi[l-1];
            one = one^val;
            zero = zero^val;
        }
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
