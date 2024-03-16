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
    sort(all(a));
    int sum = 0;
    for(int i = 0;i < n;i++) sum += a[i];
    if(a[0] >= 0){
        cout << sum << "\n";
        return;
    }
    int temp = 0;
    for(int i = 0;i < n;i++){
        if(a[i] < 0){
            temp += -a[i];
        }
    }
    cout << sum + 2*temp << "\n";
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
