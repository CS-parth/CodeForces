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
    int n;
    cin >> n;
    vector<int> a(n);
    input(a);
    map<int,bool> mp1;
    map<int,bool> mp2;
    multiset<int> st2;
    for(int i = 0;i < n+3;i++){
        mp1[i] = false;
        mp2[i] = false;
    }
    if(mp1.count(a[0]))
    mp1.erase(a[0]);
    for(int i = 1;i < n;i++){
        st2.insert(a[i]);
        if(mp2.count(a[i]))
        mp2.erase(a[i]);
    }
    for(int i = 1;i < n;i++){
        int mex1 = mp1.begin()->first;
        int mex2 = mp2.begin()->first;
        if(mex1 == mex2){
            cout << 2 << '\n';
            cout << 1 << " " << i << "\n";
            cout << i+1 << " " << n << '\n';
            return;
        }
        mp1.erase(a[i]);
        st2.erase(st2.lower_bound(a[i]));
        if(!st2.count(a[i]))
        mp2[a[i]] = false;
    }
    cout << -1 << "\n";
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
