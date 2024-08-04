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
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    input(a);
    map<int,vector<int>> mp;
    for(int i = 0;i < n;i++){
        int rem = a[i]%k;
        mp[rem].push_back(a[i]/k);
    }
    int cnt = 0;
    for(auto &it : mp){
        cnt += (it.second.size()&1);
    }
    if(cnt > 1){
        cout << -1 << "\n";
        return;
    }
    int res = 0;
    vector<int> b;
    int save = 0;
    for(auto &it : mp){
        if(it.second.size()&1 && it.second.size()>=3){
            b = it.second;
            sort(all(b));
            vector<int> pre(b.size(),0);
            vector<int> suff(b.size(),0);
            for(int i = 1;i < b.size();i+=2){
                int val = ((i-2) >= 0) ? pre[i-2] : 0;
                pre[i] = val + (b[i]-b[i-1]);
            }

            for(int i = b.size()-2;i >= 0;i-=2){
                int val = ((i+2) < (int)b.size()) ? suff[i+2] : 0;
                suff[i] = val; 
                if((i+1)>b.size() && i>=b.size())
                suff[i] += (b[i+1]-b[i]);
            }
            // print(suff);
            // print(pre);
            int mn = 1e9;
            for(int i = 0;i < b.size();i++){
                if(i&1){
                    int pi = ((i-2) >= 0) ? pre[i-2] : 0;
                    int suf = ((i+2) < (int)b.size()) ? suff[i+2] : 0;
                    int val = (b[i+1]-b[i-1]) + pi + suf;
                    // cout << i << " " << val << '\n';
                    mn = min(val,mn);
                }else{
                    int pi = ((i-1) >= 0) ? pre[i-1] : 0;
                    int suf = ((i+1) < (int)b.size()) ? suff[i+1] : 0; 
                    int val = pi + suf;
                    // cout << i << " " << val << '\n';
                    mn = min(val,mn);
                }
            }
            save = mn;
            break;
        } 
    }
    // cout << mn << '\n';
    // return;
    for(auto &it : mp){
        sort(all(it.second));
        if(it.second.size()&1){
            res += save;
        }else{
            for(int i = 0;i < it.second.size();i+=2){
                res += it.second[i+1]-it.second[i];
            }
        }
    }
    cout << res << "\n";
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