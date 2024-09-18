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
    int n,q;
    cin >> n >> q;
    vector<int> v(n);
    input(v);
    vector<int> a(n+1,0);
    map<int,set<int>> mp;
    mp[0].insert(0);
    for(int i = 1;i <= n;i++){
        a[i] = a[i-1]^v[i-1];
        mp[a[i]].insert(i);
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        if(a[x-1] == a[y]){
            cout << "YES" << "\n";
        }else{
            int pL=*--mp[a[x-1]].lower_bound(y);
			int pR=*mp[a[y]].lower_bound(x);
			cout<<(pL>pR?"YES\n":"NO\n");
        }
    }cout << '\n';
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
