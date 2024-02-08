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
    int n;
    cin >> n;
    vector<int> a(n);
    input(a);
    int q;
    cin >> q;
    vector<int> nd(n,0);
    nd[n-1] =  n;
    for(int i = n-2;i >= 0;i--){
        if(a[i] == a[i+1]){
            nd[i] = nd[i+1];
        }else{
            nd[i] = i+1;
        }
    }
    while(q--){
        int l,r;
        cin >> l >> r;
        l--;r--;
        if(nd[l] <= r){
            cout << l+1 << " " << nd[l]+1 << "\n";
        }else{
            cout << -1 << " " << -1 << "\n";
        }
    }
    cout << "\n"; 
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
