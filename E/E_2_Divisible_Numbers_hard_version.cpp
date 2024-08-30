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
    int temp = a*b;
    vector<int> fact;
    for(int k = 1;k*k <= temp;k++){
        if((temp%k) == 0){
            fact.emplace_back(k);
            fact.emplace_back(temp/k);
            temp /= k;
        } 
    }
    for(int i = 0;i < fact.size();i++){
        // finding the largest multiple <= c
        int temp = fact[i];
        int k = -1;
        int low = 1;
        int high = 1e9;
        while((high-low) > 1){
            int mid = (high+low)/2;
            if(mid*temp <= c){
                low = mid;
            }else{
                high = mid;
            }
        }
        if(high*temp <= c){
            k = high;
        }else if(low*temp <= c){
            k = low;
        }
        if(k==-1) continue;
        if(k*temp<=a) continue;
        int save = k*temp;
        temp = a*b/temp;
        // finding the largest multiple <= d
        low = 1;
        high = 1e9;
        k = -1;
        while((high-low) > 1){
            int mid = (high+low)/2;
            if(mid*temp <= d){
                low = mid;
            }else{
                high = mid;
            }
        }
        if(high*temp <= d){
            k = high;
        }else if(low*temp <= d){
            k = low;
        }   
        if(k!=-1){
            if(k*temp<=b) continue;
            assert((save*k*temp)%(a*b) == 0);
            cout << save << " " << k*temp << "\n";
            return;
        }
    }  
    cout << -1 << " " << -1 << "\n"; 
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
