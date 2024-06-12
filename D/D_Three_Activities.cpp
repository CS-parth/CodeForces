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
    vector<int> b(n);
    vector<int> c(n);
    input(a);
    input(b);
    input(c);
    vector<set<pair<int,int>>> sts(3);
    for(int i = 0;i < n;i++){
        sts[0].insert({a[i],i});
        if(sts[0].size() > 3) sts[0].erase(sts[0].begin());
        sts[1].insert({b[i],i});
        if(sts[1].size() > 3) sts[1].erase(sts[1].begin());
        sts[2].insert({c[i],i});
        if(sts[2].size() > 3) sts[2].erase(sts[2].begin());
    }
    int ans = -1;
    for(auto &itr1 : sts[0]){
        for(auto &itr2 : sts[1]){
            for(auto &itr3 : sts[2]){
                set<int> st = {itr1.second,itr2.second,itr3.second};
                if(st.size() == 3) ans = max(itr1.first + itr2.first + itr3.first,ans);
            }
        }
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
