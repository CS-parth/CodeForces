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
    int n,x,y;
    cin >> n >> x >> y;
    vector<int> a(x);
    input(a);
    sort(all(a));
    int cnt = 1;
    map<int,bool> odd;
    map<int,bool> even;
    for(int i = 1;i < x;i++){
        cnt+=1;
        if(a[i]-a[i-1] == 2) cnt+=1;
        int len = a[i]-a[i-1]+1-2;
        if(len&1){
            odd[len] = true;
        }else{
            even[len] = true;
        }
    }
    if(a[x-1]-a[0] == n-2) cnt+=1;
    int len = n-a[x-1]-a[0];
    if(len&1){
        odd[len] = true;
    }else{
        even[len] = true;
    }
    for(auto &it : odd){
        int use = min(it/2,y);
    }
    cout << (cnt-2) << '\n';
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
