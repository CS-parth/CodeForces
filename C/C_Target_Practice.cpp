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
    vector<string> a(10);
    input(a);
    // int idx = 1;
    int dir = 0; // 0 1 2 3
    int ans = 0;
    for(int i = 0; i < 5;i++){
        int x = i;
        int y = i;
        dir = 0;
        do{
            if(a[x][y] == 'X') ans+=(i+1);
            // down
            if(x == i && (9-y) == i){
                dir = 1;
            }else if((9-x) == i && (9-y) == i){
                dir = 2;
            }else if((9-x) == i && y == i){
                dir = 3;
            }
            if(dir == 0){
                y++;
            }else if(dir == 1){
                x++;
            }else if(dir == 2){
                y--;
            }else{
                x--;
            }
        }while(!(x == i && y == i));
    }
    cout << ans << "\n";
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
