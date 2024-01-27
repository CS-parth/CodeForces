/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
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
    vector<pair<int,int>> b; // left,right
    b.push_back({1,1});
    if(n >= 3){
        for(int i = 1;i <= n-2;i++){
            if(min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1])) == abs(a[i]-a[i-1])){
                b.push_back({1,abs(a[i]-a[i+1])});
            }else{
                b.push_back({abs(a[i]-a[i-1]),1});
            }
        }
    }
    b.push_back({1,1});
    // for(int i = 0;i < n;i++) cout << b[i].first << " " << b[i].second << "\n";
    vector<int> right_pi(n,0);
    vector<int> left_pi(n,0);
    int lst = 0;
    for(int i = 1;i < n;i++){
        right_pi[i] = lst + b[i-1].second;
        lst = right_pi[i];
    }  
    lst = 0;
    for(int i = n-2;i >= 0;i--){
        left_pi[i] = lst + b[i+1].first;
        lst = left_pi[i];
    }
    int m;
    cin >> m;
    while(m--){
        int a,b;
        cin >> a >> b;
        a--;b--;
        if(a > b){
            cout << left_pi[b] - left_pi[a];
        }else{
            cout << right_pi[b] - right_pi[a]; 
        }
        cout << "\n";
    }
}

signed main() {
std::ios::sync_with_stdio(false);
#ifndef ONLINE_JUDGE
	freopen("Error.txt", "w", stderr);
#endif
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
