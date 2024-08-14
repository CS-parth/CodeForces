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

int solve(int mid,vector<pair<int,int>> pr,vector<int> p,int m,int n){
    vector<int> pi(n+1,0);
    for(int i  = 0;i <= mid;i++){
        pi[p[i]]++;
    }
    // print(pi);
    for(int i =  0;i < n;i++){
        pi[i+1]  += pi[i];
    }
    // print(pi);
    for(int i = 0;i < m;i++){
        pair<int,int> t = pr[i];
        int left = pr[i].first;
        int right = pr[i].second;
        int availCon = pi[right+1]-pi[left];
        // cout << availCon << "\n";
        if(availCon > (right-left+1)/2){
            return (mid+1);
        }
    }
    return 1e9;
}
/*
    5 2
    1 5
    1 5
    4
    2
    1
    3
    4
*/
void init_1(){
    int n,m;
    cin >> n >> m;
    vector<pair<int,int>> pr;
    for(int i = 0;i < m;i++){
        int a,b;
        cin >> a >> b;
        --a;
        --b;
        pr.push_back({a,b});
    }
    int q;
    cin >> q;
    vector<int> p(q);
    for(int i = 0;i < q;i++){
        int x;
        cin >> x;
        p[i] = x;
    }
    int low = 0;
    int high = q-1;
    int mn = 1e9;
    while((high-low) > 1){
        int mid = (high + low)/2;
        int val = solve(mid,pr,p,m,n);
        // cout << val << "\n";
        if(val!=1e9){
            high = mid;
        }else{
            low = mid;
        }
    }
    int l = solve(low,pr,p,m,n);
    int r = solve(high,pr,p,m,n);
    mn = min(l,mn);
    mn = min(r,mn);
    if(mn == 1e9){
        cout << -1 << '\n';
    }else{
        cout << mn << '\n';
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