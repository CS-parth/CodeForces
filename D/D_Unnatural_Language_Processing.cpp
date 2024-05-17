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
    string str;
    cin >> str;
    string save = str;
    for(int i = 0;i < n;i++){
        if(str[i] == 'a' || str[i] == 'e') str[i] = 'V';
        else str[i] = 'C';
    }
    string temp = "";
    temp+=save[0];temp+=save[1];
    int idx = 2;
    string ans = "";
    while(idx < n){
        // cout << idx << "\n";
        if(idx+1 >= n){
            // take it
            temp+=save[idx];
            temp+='.';
            ans+=temp;
            // move two idx
            temp = "";
            if(idx+1 >= n) break;
            temp += save[idx+1];
            temp += save[idx+2];
            idx = idx+3;
        }else{
            if(str[idx+1] == 'C'){
                // take it 
                temp+=save[idx];
                temp+='.';
                ans+=temp;
                // move two idx
                if(idx+1 >= n) break;
                temp = "";
                temp += save[idx+1];
                temp += save[idx+2];
                idx = idx+3;
            }else{
                // leave it 
                temp+='.';
                ans+=temp;
                temp = "";
                temp += save[idx];
                temp += save[idx+1];
                idx = idx+2;
            }
        }
    }
    if(!temp.empty()){
        ans+=temp;
    }else{
        ans.pop_back();
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
