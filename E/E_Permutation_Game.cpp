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
    set<int> st1;
    set<int> st2;
    set<int> common;
    for(int i = 0;i < n;i++){
        if(a[i] != (i+1) && a[i] != (n-i)) common.insert(i);
        else if(a[i] != (i+1)) st1.insert(i);
        else if(a[i] != (n-i)) st2.insert(i);
    }
    int turn = 0;
    while(1){
        if(turn == 0){
            if(st1.empty()){
                if(common.empty()){
                    cout << "First" << "\n";
                    return;
                }else{
                    if(st2.empty() && common.size() == 1){
                        cout << "Tie" << "\n";
                        return;
                    }else{
                        common.erase(common.begin());
                    }   
                }
            }else{
                st1.erase(st1.begin());
            }
        }else{
            if(st2.empty()){
                if(common.empty()){
                    cout << "Second" << '\n';
                    return;
                }else{
                    if(st1.empty() && common.size() == 1){
                        cout << "Tie" << "\n";
                        return;
                    }else{
                        common.erase(common.begin());
                    }
                }
            }else{
                st2.erase(st2.begin());
            }
        }
        turn ^= 1;
    }
    cout << -1 << "\n";
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
