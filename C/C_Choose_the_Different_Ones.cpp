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
#define input(a) for (int &x : a) cin >> x;

void init_1(){
    unordered_map<int,bool> mp1;
    unordered_map<int,bool> mp2;
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    input(a);input(b);
    for(int i = 0;i < n;i++){
        if(a[i] <= k) mp1[a[i]] = true;
    }
    for(int i = 0;i < m;i++){
        if(b[i] <= k) mp2[b[i]] = true;
    }

    for(int i = 1;i <= k;i++){
        if(!mp1.count(i) && !mp2.count(i)){
            // cout << k << "\n";
            cout << "NO" << "\n";
            return;
        }
        if(mp1.count(i) && mp2.count(i)){
            // cout << "er" << "\n";
            mp1.erase(i);
            mp2.erase(i);
        }
    }
    int a_ = mp1.size();
    int b_ = mp2.size();
    if(a_ > k/2 || b_ > k/2){
        // cout << a_ << " " << b_ << "\n";
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
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
