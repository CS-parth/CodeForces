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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans = 1e18;
    int k = 0;
    for(int i = 0;i < n;i++) k+=(str[i]=='*');
    if(k<=1){
        cout << 0 << "\n";
        return;
    }
    // ----[----]-----
    // maintain a sliding window --> with prefix array and prefix array of empty spaces starting position wrt to window
    // maintain the prefix ans suffix sum of the sheeps position 
    // on one window answer will be --> (sumoffirstpemptyplaces - prefix) + (suffix - sumofleftemptyspaces)
    int j = 0;
    int i = 0;
    int size = n;
    int prefix = 0;
    int suffix = 0;
    int idx = 0; // check edge-case for this
    int cnt = 0; 
    vector<int> pi(1,0);
    for(int i = 0;i < n;i++) suffix += ((str[i]=='*') ? i : 0);
    // cout << suffix << " " << prefix << " " << idx << " " << cnt << '\n';
    while(j < size){
        if(str[j] == '*'){
            suffix-=j;
        }else{
            pi.push_back(j+pi.back());
        }
        // cout << suffix << " " << prefix << " " << idx << " " << cnt << '\n';
        if(j-i+1 < k){
            j++;
        }else{
            // cout << ((pi[idx+cnt]-pi[idx])-prefix) + (suffix-(pi.back()-pi[idx+cnt])) << '\n';
            // calculate the answer
            ans = min(ans,((pi[idx+cnt]-pi[idx])-prefix) + (suffix-(pi.back()-pi[idx+cnt])));
            // shift the window
            if(str[i] == '*'){
                prefix += i;
                cnt++;
            }else{
                idx++;
            }
            i++;
            j++;
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
