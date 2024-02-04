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
    int a,b,x;
    cin >> a >> b >> x;
    bool f = false;
    bool flag = false;
    auto swap = [](int &a,int &b){
        int temp = a;
        a = b;
        b = temp;
    };
    if(a < b) swap(a,b);
    if(x == 0){
        cout << a-b << "\n";
        return;
    }
    // a is always greater than b
    for(int i = 62; i >=0;i--){
       if(a == b){
            cout << 0 << "\n";
            return;
        }
       int choice = 0;
       int abit = (a>>i)&1ll;
       int bbit = (b>>i)&1ll;
       int xbit = (x>>i)&1ll;
       if(abit == 0 && bbit == 0 && xbit == 0) continue;
       if(abit == 1 && bbit == 0){
            if(!flag){
                flag = true;
            }else{
                choice = 1;
            }
       }
    //  cout << i << " " << choice << "\n";
       int limit = f ? 1 : xbit;
       if(choice > limit) choice = 0;
    //  cout << i << " " << choice << "\n";
       a = a^(choice<<i);
       b = b^(choice<<i);
    //  cout << a << " " << b << "\n";
       if(a < b) swap(a,b);
       f = f|(choice!=(xbit));
    }
    cout << a-b << "\n";
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
