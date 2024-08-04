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
    int n,k;
    cin >> n >> k;
    int mx = 0;
    if(n&1){
        mx = 2*(pow(n/2,2) + n/2);
        // if(n==1) mx = 0;
    }else{
        mx = 2*(pow(n/2,2));
        // cout << pow(n/2,2) << "\n";
    }
    if(k > mx){
        cout << "NO" << '\n';
        return;
    }
    if(k&1){
        cout << "NO" << "\n";
        return;
    }
    int i = 0;
    int j = n-1;
    int need = k;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        a[i] = i+1;
    }
    while(1){
        // what i can give 
        if(need == 0) break;
        int availaible = 2*(j-i);
        if(need >= availaible){
            swap(a[i],a[j]);
            need -= availaible;
            i++;j--;
            if(need == 0) break;
        }else{
            swap(a[i],a[i+(need/2)]);
            break;
        }
    }
    cout << "YES" << '\n';
    print(a);
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
