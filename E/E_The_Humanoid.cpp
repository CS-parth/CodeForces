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
    int n,h;
    cin >> n >> h;
    vector<int> a(n);
    input(a);
    sort(all(a));
    int ans = 0;
    int ops[3] = {1,1,2};
    do{ 
        // print(ops);
        int x = 0;
        int hh = h;
        int mx = 0;
        bool flag = true;
        for(int i = 0;i < n;i++){
            if(hh>a[i]){
                hh += a[i]/2;
            }else{
                if(x==3){
                    flag = false;
                    mx = i;
                    break;
                }
                bool f = false;
                while(x<3){
                    if(ops[x] == 1){
                        hh = hh*2;
                    }else{
                        hh = hh*3;
                    }
                    x++;
                    if(hh>a[i]){
                        hh+=a[i]/2;
                        f = true;
                        break;
                    }
                }
                if(!f){
                    mx = i;
                    flag = false;
                    break;
                }
            }
        }
        if(flag) mx = n;
        ans = max(mx,ans);
    }while (next_permutation(ops,ops+3));
    cout << ans << '\n';
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
