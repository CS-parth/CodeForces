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
    int a,b;
    int kx,ky,qx,qy;
    cin >> a >> b >> kx >> ky >> qx >> qy;
    map<pair<int,int>,bool> mp1;
    map<pair<int,int>,bool> mp2;

    mp1[{kx+b,ky+a}] = true;
    mp1[{kx-b,ky+a}] = true;
    mp1[{kx+b,ky-a}] = true;
    mp1[{kx-b,ky-a}] = true;
    mp1[{kx+a,ky+b}] = true;
    mp1[{kx+a,ky-b}] = true;
    mp1[{kx-a,ky+b}] = true;
    mp1[{kx-a,ky-b}] = true;

    mp2[{qx+b,qy+a}] = true;
    mp2[{qx-b,qy+a}] = true;
    mp2[{qx+b,qy-a}] = true;
    mp2[{qx-b,qy-a}] = true;
    mp2[{qx+a,qy+b}] = true;
    mp2[{qx+a,qy-b}] = true;
    mp2[{qx-a,qy+b}] = true;
    mp2[{qx-a,qy-b}] = true;

    int ans = 0;
    for(auto &it : mp1){
        if(mp2.count(it.first)){
            ans++;
        }
    }
    cout << ans << "\n";
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
