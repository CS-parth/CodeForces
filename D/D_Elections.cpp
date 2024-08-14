/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
#include<bits/stdc++.h>

using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>

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
    multiset<int> st;
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    input(a);
    a[0]+=k;
    vector<int> ans;
    vector<int> mx(n);
    vector<int> mx_(n);
    int curr_mx = -1;
    for(int i = n-1;i >= 0;i--){
        mx[i] = curr_mx;
        curr_mx = max(curr_mx,a[i]);
    }
    curr_mx = -1;
    for(int i = 0;i < n;i++){
        mx_[i] = curr_mx;
        curr_mx = max(curr_mx,a[i]);
    }
    vector<int> pi(n);
    for(int i = 0;i < n;i++){
        if(i==0) pi[i] = a[i];
        else pi[i] = pi[i-1] + a[i];
    }
    // print(mx);
    for(int i = 0;i < n;i++){
        int op = 0;
        bool f = false;
        if(mx_[i] >= a[i]){
            f = true;
            op = i;
        }
        int val = 0;
        if(i!= 0 && f){
            val = pi[i-1];
        }
        if(mx[i] > (a[i] + val)){
            op = i + 1;
        }
        ans.push_back(op);
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
