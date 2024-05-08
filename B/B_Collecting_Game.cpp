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
    vector<pair<int,int>> pr;
    for(int i = 0;i < n;i++){
        pr.push_back({a[i],i});
    }
    sort(all(pr));
    vector<int> b(n);
    vector<int> pi(n);
    pi[0] = pr[0].first;
    for(int i = 1;i < n;i++){
        pi[i] = pi[i-1] + pr[i].first;
    }
    int x = 0;
    b[0] = 0;
    for(int i = 1;i < n;i++){
        if(pi[i-1] >= pr[i].first){
            b[i] = x;
        }else{
            x = i;
            b[i] = x;
        }
    }
    vector<int> ans(n);
    for(int i = 0;i < n;i++){
        int l = 0;
        int r = n;
        while(r-l > 1){
            int mid = (r+l)>>1;
            if(b[mid] <= i){ // true
                l = mid;
            }else{
                r = mid;
            }
        }
        ans[pr[i].second] = l;
    }
    print(ans);
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
