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
    string s;
    string t;
    cin >> s >> t;
    vector<int> a(26,-1);
    for(int i = 0;i < t.size();i++){
        if((i+1)!=t.size())
        a[t[i]-'a'] = max(i,a[t[i]-'a']);
    }
    int idx1 = -1;
    int idx2 = -1;
    int mn = 1e9;
    for(int i = 1;i < s.size();i++){
        if(a[s[i]-'a'] != -1){
            int len1 = i+1;
            int len2 = t.size()-a[s[i]-'a'];
            if(len1+len2 < mn){
                mn = len1+len2;
                idx1 = i;
                idx2 = a[s[i]-'a']; 
            }
        }
    }
    if(idx1!=-1){
        // cout << mn << "\n";
        for(int i = 0;i <= idx1;i++){
            cout << s[i];
        }
        for(int i = idx2+1;i < t.size();i++){
            cout << t[i];
        }
        cout << '\n';
    }else{
        cout << -1 << "\n";
    }
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
