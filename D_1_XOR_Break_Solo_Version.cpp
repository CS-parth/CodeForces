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
    vector<int> answer;
    answer.push_back(n);
    for(int i = 0;i <= 62;i++){
        int bit1 = ((n>>i)&1);
        int bit2 = ((m>>i)&1);
        if(bit1 == bit2) continue;
        else{
            int val = (1ll<<i);
            // cout << val << '\n';
            if(val >= n){
                cout << -1 << '\n';
                return;
            }
            answer.push_back(answer.back()^val);
            n = answer.back();
        }
    }
    if(answer.back() == m){
        cout << answer.size()-1 << '\n';
        print(answer);
    }else{
        cout << -1 << '\n';
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
