/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    int n,k,m;
    string str;
    cin >> n >> k >> m >> str;
    vector<int> mp[26];
    for(int i = 0;i < str.size();i++){
        mp[str[i]-'a'].emplace_back(i);
    }
    int lst = -1e9;
    string ans = "";
    for(int level = 0;level < n;level++){
        char ch = 'a';
        int save = lst;
        for(int i = 0;i < k;i++){
            if(upper_bound(mp[i].begin(),mp[i].end(),lst) == mp[i].end()){
                // add this char
                ans += 'a'+ i;
                for(int j = level+1;j < n;j++){
                    ans += 'a';
                }
                cout << "NO" << "\n";
                cout << ans << "\n";
                return;
            }else{
                if(save < *upper_bound(mp[i].begin(),mp[i].end(),lst)){
                    save = *upper_bound(mp[i].begin(),mp[i].end(),lst);
                    ch = 'a'+i;
                }
                // lst = max(lst,);
            }
        }
        lst = save;
        // cout << lst << "\n";
        ans += ch;
    }
    cout << "YES" << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
