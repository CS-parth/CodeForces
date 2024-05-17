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
    char arr[3][3];
    int row = 0;
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            cin >> arr[i][j]; // << '\n';
            if(arr[i][j] == '?'){
                row = i;
            }
        }
    }
    bool f[3] = {false};
    for(int j = 0;j < 3;j++){
        f[arr[row][j]-'A'] = true;
    }
    for(int i = 0;i < 3;i++){
        if(f[i] == false){
            char ch = i+'A';
            cout << ch << "\n";
            return;
        }
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
