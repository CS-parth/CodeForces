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
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    input(a);
    vector<int> ones(n,0);
    vector<int> sum(n,0);
    for(int i = 0;i < n;i++){
        if(i == 0){
            ones[i] = (int)(a[i] == 1);
            sum[i] = a[i];
        }else{
            ones[i] = ones[i-1] + (int)(a[i] == 1);
            sum[i] = sum[i-1] + a[i];
        }
    }
    // print(ones);
    // print(sum);
    for(int i = 0;i < q;i++){
        int l,r;
        cin >> l >> r;
        l--;r--;
        if(l==r){
            cout << "NO" << "\n";
        }else{
            int one_cnt = ones[r];
            if(l!=0) one_cnt -= ones[l-1];
            int sum_cnt = sum[r];
            if(l!=0) sum_cnt -= sum[l-1];
            int non_ones = r-l+1 - one_cnt;
            if((sum_cnt - non_ones) >= 2*one_cnt){
                cout << "YES" << '\n';
            }else{
                cout << "NO" << "\n";
            }
        }
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
