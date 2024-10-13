/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
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
    int n,x;
    cin >> n >> x;
    vector<int> a(n);
    input(a);
    int lo = 0;
    int hi = n-1;
    vector<pair<int,int>> ans;
    int pos = 0;
    for(int i = 0;i < n;i++){
        if(a[i] == x) pos = i;
    }
    if(a[0] != a[pos]){
        swap(a[0],a[pos]);
        ans.push_back({0+1,pos+1});
        pos = 0;
    }
    while(hi-lo>1){
        int mid = (lo+hi)/2;
        if(a[mid] <= x){
            lo = mid;
        }else{
            hi = mid;
        }
    }
    if(a[lo] != a[pos]){
        ans.push_back({lo+1,pos+1});
    }
    cout << ans.size() << '\n';
    for(auto &it : ans){
        cout << it.first << " " << it.second << "\n";
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
