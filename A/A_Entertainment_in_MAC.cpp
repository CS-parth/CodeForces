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
    string str;
    cin >> str;
    bool f = true;
    int l = 0,r = str.size()-1;
    while(r>l){
        if(str[l] > str[r]){
            f = false;
            break;
        }else if(str[l] < str[r]){
            f = true;
            break;
        }
        l++;r--;
    }
    if(f){
        cout << str << "\n";
        return;
    }else{
        reverse(all(str));
        cout << str;
        reverse(all(str));
        cout << str << '\n';
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
