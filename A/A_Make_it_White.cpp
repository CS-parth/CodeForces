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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int fst = -1;
    int lst = -1;
    // int n = str.size();
    for(int i = 0;i < n;i++){
        if(str[i] == 'B') lst = i;
    }
    for(int i = str.size()-1;i>=0;i--){
        if(str[i] == 'B') fst = i;
    }
    if(lst == -1){
        cout << 0 << "\n";
    }else{
        cout << lst - fst + 1 << "\n";
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
