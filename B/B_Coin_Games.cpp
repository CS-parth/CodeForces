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
    string str;
    cin >> n >> str;
    vector<int> left(str.size());
    vector<int> right(str.size());
    for(int i = 0;i < str.size();i++){
        left[i] = (i == 0) ? str.size()-1 : i-1;
        right[i] = (i == str.size()-1) ? 0 : i+1;
    }
    int turn = 0;
    while(1){
        // cout << str << "\n";
        // parse the string 
        int idx = 0;
        int cnt = 0;
        for(int i = 0;i < n;i++){
            if(str[i] == 'U'){
                int temp = (str[left[i]]=='U') + (str[right[i]]=='U');
                if(temp >= cnt){
                    cnt = temp;
                    idx = i;
                }
            }
        }
        if(str[idx] == '#' || str[idx] == 'D'){
            if(turn == 0){
                cout << "NO" << "\n";
            }else{
                cout << "YES" << "\n";
            }
            break;
        }
        // flip left and right
        // change left and right of left if any is idx
        // change right and left of the right if any is idx
        str[left[idx]] = (str[left[idx]] == 'U') ? 'D' : 'U';
        str[right[idx]] = (str[right[idx]] == 'D') ? 'U' : 'D';
        
        left[left[idx]] = (left[left[idx]] == idx) ? left[idx] : left[left[idx]];
        right[left[idx]] = (right[left[idx]] == idx) ? right[idx] : right[left[idx]];

        left[right[idx]] = (left[right[idx]] == idx) ? left[idx] : left[right[idx]];
        right[right[idx]] = (right[right[idx]] == idx) ? right[idx] : right[right[idx]]; 
        // remove idx
        str[idx] = '#';

        turn = turn^1;
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
