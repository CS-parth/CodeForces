/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
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
    vector<int> a;
    vector<int> b;
    for(int i = 0;i < n;i++){
        int x,y;
        cin >> x >> y;
        a.push_back(x);
        b.push_back(y);
    }
    sort(all(a));
    sort(all(b));
    int avail_x = 0;
    int avail_y = 0;
    if(n&1){
        avail_x = 1;
    }else{
        avail_x = a[n/2]-a[n/2-1]+1;
    }
    if(n&1){
        avail_y = 1;
    }else{
        avail_y = b[n/2]-b[n/2-1]+1;
    }
    cout << avail_x*avail_y << '\n';
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
