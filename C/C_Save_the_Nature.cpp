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
    int n;
    cin >> n;
    vector<int> tickets(n);
    input(tickets);
    int x,a;
    int y,b;
    int k;
    cin >> x >> a >> y >> b >> k;
    sort(all(tickets));
    reverse(all(tickets));
    int idx = 0;
    if(y < x){
        swap(a,b);
        swap(x,y);
    }
    // cout << x << a << y << b << k << "\n";
    int lcm = (a*b)/__gcd(a,b);
    int l = 0;
    int r = n+1;
    while(r -l > 1){
        int mid = (l+r)>>1;
        // cout << mid << '\n';
        vector<int> temp(mid,0);
        int idx = 0;
        for(int i = lcm-1;i < mid;i+=lcm){
            temp[i] = (tickets[idx]/100)*(x+y);
            idx++;
        }
        // cout << idx << "\n";
        for(int i = b-1;i < mid;i+=b){
            if(temp[i] == 0){
                temp[i] = (tickets[idx]/100)*(y);
                idx++;
            }
        }
        // cout << idx << "\n";
        for(int i = a-1;i < mid;i+=a){
            if(temp[i] == 0){
                temp[i] = (tickets[idx]/100)*(x);  
                idx++;
            }
        }
        // print(temp);
        idx = 0;
        temp.clear();
        int amount = 0;
        for(int i = 0;i < mid;i++) amount += temp[i];
        if(amount >= k){
            r = mid;
        }else{
            l = mid;
        }
    }
    cout << ( r==n+1 ? -1 : r ) << "\n";
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
