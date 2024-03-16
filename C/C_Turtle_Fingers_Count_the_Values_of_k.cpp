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
    int a,b,l;
    cin >> a >> b >> l;
    int ans = 0;
    set<int> st;
    for(int x = 0;x <= 20;x++){
        for(int y = 0;y <= 20;y++){
            int num = pow(a,x)*pow(b,y);
            if(num > l) break;
            if(l%num == 0){
                st.insert(l/num);
            }
        }
    }
    cout << st.size() << "\n";
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
