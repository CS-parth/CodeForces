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
    int n,m;
    cin >> n >> m;
    vector<int> a(n+m+1);
    vector<int> b(n+m+1);
    input(a);
    input(b);
    if(n==0 && m==0){
        cout << 0 << "\n";
        return;
    }
    set<int> p;
    set<int> t;
    for(int i = 0;i < n+m+1;i++){
        if(a[i] > b[i]) p.insert(i);
        else t.insert(i);
    }
    if(p.size() >= n+1){
        int k = 0;
        for(auto &it : p){
            if((k) > n){
                t.insert(it);
            }
            k++;
        }
        k = 0;
        vector<int> to_remove;
        for(auto &it : p){
            if((k) > n){
                to_remove.emplace_back(it);
            }
            k++;
        }
        for(auto &it : to_remove) p.erase(it);
        // print(p);
        // print(t);
        int total_sum_p = 0;
        int total_sum_t = 0;
        for(auto &it : p) total_sum_p += a[it];
        for(auto &it : t) total_sum_t += b[it];
        vector<int> ans;
        for(int i = 0;i < n+m+1;i++){
            // if ith person is absent
            int cnt = total_sum_p;
            // cout << i << ": " << cnt << "\n";
            if(p.count(i)){
                cnt -= a[i];
            }else{
                if(!p.empty()) cnt -= a[*p.rbegin()];
            }
            // cout << i << ": " << cnt << "\n";
            // now take all the testes
            cnt += total_sum_t;
            // cout << i << ": " << cnt << "\n";
            if(t.count(i)){
                cnt -= b[i];
                if(!p.empty())
                cnt += b[*p.rbegin()];
            }
            // cout << i << ": " << cnt << "\n";
            ans.push_back(cnt);
        }
        print(ans);
    }else{
        // if(t.size() >= m+1)
        int k = 0;
        for(auto &it : t){
            if(k > m){
                p.insert(it);
            }
            k++;
        }
        k = 0;
        vector<int> to_remove;
        for(auto &it : t){
            if(k > m){
                to_remove.emplace_back(it);
            }
            k++;
        }
        for(auto &it : to_remove) t.erase(it);
        // print(p);
        // print(t);
        int total_sum_p = 0;
        int total_sum_t = 0;
        for(auto &it : p) total_sum_p += a[it];
        for(auto &it : t) total_sum_t += b[it];
        // cout << total_sum_p << " " << total_sum_t << "\n";
        vector<int> ans;
        for(int i = 0;i < n+m+1;i++){
            // if ith person is absent
            int cnt = total_sum_t;
            // cout << i << ": " << cnt << "\n";
            if(t.count(i)){
                cnt -= b[i];
            }else{
                if(!t.empty()) cnt -= b[*t.rbegin()];
            }
            // cout << i << ": " << cnt << "\n";
            // now take all the testes
            cnt += total_sum_p;
            // cout << i << ": " << cnt << "\n";
            if(p.count(i)){
                cnt -= a[i];
                if(!t.empty())
                cnt += a[*t.rbegin()];
            }
            // cout << i << ": " << cnt << "\n";/
            ans.push_back(cnt);
        }
        print(ans);
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
