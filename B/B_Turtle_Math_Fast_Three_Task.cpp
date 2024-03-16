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
    int sum = 0;
    unordered_map<int,bool> mp;
    for(int i = 0;i < n;i++){
        sum += a[i];
        a[i] = a[i]%3;   
        mp[a[i]] = true;
    }
    if(sum%3 == 0){
        cout << 0 << "\n";
        return;
    }
    int temp = 3 - (sum%3);
    if(mp[sum%3]){
        cout << 1 << '\n';
    }else{
        cout << temp << "\n";
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
