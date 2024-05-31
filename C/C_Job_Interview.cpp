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
    // cout << 1 << "\n";
    int n,m;
    cin >> n >> m;
    vector<int> a(n+m+1);
    vector<int> b(n+1+m);
    input(a);input(b);
    // cout << 1 << "\n";
    unordered_map<int,pair<int,int>> mp; // rem n,m
    unordered_map<int,int> mp1; // sum
    int temp_n = n;
    int temp_m = m;
    int sum = 0;
    for(int i = 0;i < n+m+1;i++){
        if(b[i] > a[i]){
            if(temp_m){
                temp_m--;
                sum += b[i];
            }else{
                temp_n--;
                sum += a[i];
            }
        }else{
            if(temp_n){
                temp_n--;
                sum += a[i];
            }else{
                temp_m--;
                sum += b[i];
            }
        }
        mp[i] = {temp_n,temp_m};
        mp1[i] = sum;
    }
    vector<int> p;
    vector<int> t;
    for(int i = 0;i < n;i++){
        if(a[i] > b[i]) p.push_back(i);
        else t.push_back(i);
    }
    vector<int> pi_p(p.size());
    vector<int> pi_t(t.size());
    if(p.size()!=0)
    pi_p[0] = p[0];
    for(int i = 1;i < p.size();i++){
        pi_p[i] = pi_p[i-1] + p[i];
    }
    if(t.size()!=0)
    pi_t[0] = t[0];
    for(int i = 1;i < t.size();i++){
        pi_t[i] = pi_t[i-1] + t[i];
    }
    vector<int> ans;
    for(int i = 0;i < n+m+1;i++){ // final looping 
        // remove i
        int temp = mp1[i]; // back part
        // i+1
        int temp_n = mp[i].first;
        int temp_m = mp[i].second;
        // take piority based;
        int lst_p = upper_bound(all(p),i) - p.begin(); // last notTaken
        int lst_t = upper_bound(all(t),i) - t.begin(); // last notTaken
        if(temp_n){
            int idx = upper_bound(all(p),i) - p.begin();
            // if(idx == p.size()) break;
            int lst = idx+temp_n-1;
            if(lst < p.size()){
                temp += pi_p[lst] - (idx != 0) ? pi_p[idx-1] : 0;
                lst_p = lst+1;
                temp_n = 0;
            }else{
                lst_p = p.size();
                temp += pi_p[lst_p-1] - (idx != 0) ? pi_p[idx-1] : 0;
                temp_n -= lst_p - idx;
            }
        }
        if(temp_m){
            int idx = upper_bound(all(t),i) - t.begin();
            // if(idx == t.size()) break;
            int lst = idx + temp_m -1;
            if(lst < t.size()){
                temp += pi_t[lst] - (idx != 0) ? pi_t[idx-1] : 0;
                lst_t = lst+1;
                temp_m = 0;
            }else{
                lst_t = t.size();
                temp += pi_t[lst_p-1] - (idx != 0) ? pi_p[idx-1] : 0;
                temp_m -= lst_t - idx;
            }
        }

        // rem programmers 
        if(lst_t+temp_n-1 < pi_t.size())
        temp += pi_t[lst_t+temp_n-1] - (lst_t != 0) ? pi_t[lst_t-1] : 0;
        // rem testers
        if(lst_p+temp_m-1 < pi_p.size())
        temp += pi_p[lst_p+temp_m-1] - (lst_p != 0) ? pi_p[lst_p-1] : 0;
        // cout << i << "\n";
        ans.push_back(temp);    
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
