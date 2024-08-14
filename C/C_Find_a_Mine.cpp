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
    auto query = [](int x,int y){
        cout << '?' << " " << x << " " << y << "\n";
        cout << "\n";
        fflush(stdout);
        int ans;
        cin >> ans;
        return ans;
    };
    auto result = [](int x,int y){
        cout << "!" << " " << x << " " << y << '\n';
        cout << "\n";
        fflush(stdout);
    };
    int answer = query(1,1);
    if(answer == 0){
        result(1,1);
        return;
    }else{
        int new_answer;
        int nxt_answer;
        int x1,y1,x2,y2;
        if(answer < n){
            new_answer = query(answer+1,1);
            x1 = (answer+1)-(new_answer/2);
            y1 = 1+(new_answer/2);
        }else{
            new_answer = query(n,answer-n+2);
            x1 = (n)-(new_answer/2);
            y1 = (answer-n+2)+(new_answer/2);
        }
        if(answer < m){
            nxt_answer = query(1,answer+1);
            x2 = 1+(nxt_answer/2);
            y2 = (answer+1)-(nxt_answer/2);
        }else{
            nxt_answer = query(answer-m+2,m);
            x2 = (answer-m+2)+(nxt_answer/2);
            y2 = m-(nxt_answer/2);
        }
        int lst_answer;
        if(x1<=n && x1>0 && y1<=m && y1>0){
            lst_answer = query(x1,y1);
        }else{
            result(x2,y2);
        }
        if(lst_answer == 0){
            result(x1,y1);
        }else{
            result(x2,y2);
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
