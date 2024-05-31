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
    multiset<int> st2;
    multiset<int> st1;
    for(int i = 0;i < n;i++){
        int x;cin >> x;
        st1.insert(x);
    }
    for(int i = 0;i < m;i++){
        int x;cin >> x;
        st2.insert(x);
    }
    int ans = 0;
    while(!st1.empty()){
        if(st1.size() == 1){
            if(abs(*st1.begin()-*st2.rbegin()) > abs(*st1.rbegin()-*st2.begin())){
                ans += abs(*st1.begin()-*st2.rbegin());
            }else{
                ans += abs(*st1.rbegin()-*st2.begin());
            }
            break;
        }
        ans += abs(*st1.begin()-*st2.rbegin());
        ans += abs(*st2.begin()-*st1.rbegin());
        // remove both of them
        st2.erase(st2.begin());
        st2.erase(--st2.end());
        st1.erase(st1.begin());
        st1.erase(--st1.end());
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
