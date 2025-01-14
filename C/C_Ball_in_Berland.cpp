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
    int boys,girls,n;
    cin >> boys >> girls >> n;
    vector<int> a(n);
    input(a);
    vector<int> b(n);
    input(b);
    vector<pair<int,int>> vec(n);
    for(int i = 0;i < n;i++){
        vec[i] = {a[i],b[i]};
    }
    sort(all(vec));
    map<int,int> mp;
    for(int i = 0;i < n;i++){
        mp[vec[i].second]++;
    }
    vector<vector<int>> ping(n);
    int ans = 0;
    for(int i = 0;i < n;i++){
        pair<int,int> pr = {vec[i].first+1,-1};
        int idx = lower_bound(all(vec),pr)-vec.begin();
        // cout << idx << "\n";
        if(idx!=n){
            ping[idx].push_back(i);
        }
        for(auto &it : ping[i]){
            // cout << "Pinged by " << it << '\n';
            ans += (n-i - mp[vec[it].second]);
        }
        mp[vec[i].second]--;
    }
    cout << ans << '\n';
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
