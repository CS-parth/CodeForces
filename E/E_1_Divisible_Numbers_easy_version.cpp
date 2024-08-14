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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i = a+1;i <= c;i++){
        int temp = a*b;
        int num = i;
        // removing the prime factorization of i
        for(int j = 2;j*j<=num;j++){
            while((num%j) == 0){
                num/=j;
                if(temp%j == 0) temp/=j;
            }
        }
        if((temp%num) == 0){
            temp/=num;
        }
        int low = 1;
        int high = 1e9;
        while(high-low > 1){
            int mid = (high+low)/2;
            if(mid*temp <= d){
                low = mid;
            }else{
                high = mid;
            }
        }
        int k = -1;
        if(high*temp <= d){
            k = high;
        }else if(low*temp <= d){
            k = low;
        }
        if(k!=-1 && k*temp>b){
            cout << i << " " << k*temp << "\n";
            return;
        }
    }
    cout << -1 << " " << -1 << '\n';
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
