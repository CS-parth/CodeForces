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
    string str;
    cin >> str;
    unordered_map<int,vector<int>> mp;
    int cnt = 0;
    int ans = 0;
    // cout << sstr << "\n";
    int n = str.size();
    vector<int> bal(n); 
    for(int i = 0;i < str.size()-1;i++){
        if(str[i] == '(') cnt++;
        else cnt--;
        bal[i] = cnt;
        mp[cnt].emplace_back(i);
    }
    int mx[n][n];
    int ans = 0;
    for(int idx = n-1;idx >= 0;idx--){ // number of good subarrays ending at this idx
        // BS on mp[bal[r]]
        int low = 0;
        int high = mp[bal[idx]].size()-2;
        // not sure for the l and r to be true or false 
        vector<int> v = mp[bal[idx]]; // indexes of all the bal[idx]
        if(v.size() == 1){
            continue;
        }
        while(high-low > 1){
            int mid = (high+low)>>1;
            if(mx[v[mid]+1][idx] <= 2*bal[v[mid]]){
                high = mid;
            }else{
                low = mid;
            }
        }
        if(mx[v[low]+1][idx] <= 2*bal[v[low]]){
            int len = v.size()-low-1;
            if(len) ans += len;
        }else if(mx[v[high]+1][idx] <= 2*bal[v[high]]){
            int len = v.size()-high-1;
            if(len) ans += len;
        }else{
            continue;
        }
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
