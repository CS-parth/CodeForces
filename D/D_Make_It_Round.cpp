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


int find_fact(int n,int k){
    int temp = n;
    int ans = 0;
    while(1){
        if(temp%k == 0){
            ans++;
            temp/=k;
        }else{
            break;
        }
    } 
    return ans;
}
void init_1(){
    int n,k;
    cin >> n >> k;
    int five = find_fact(n,5);
    int two = find_fact(n,2);
    if(five>two){
        five-=two;
        two = 0;
    }else if(five<two){
        two-=five;
        five=0;
    }else{
        two = 0;
        five = 0;
    }
    int made = 1;
    if(five){
        // finding two
        for(int i = 0;i < five;i++){
            if(made*2 <= k){
                made*=2;
            }else{
                break;
            }
        }
    }
    if(two){
        // finding five
        for(int i = 0;i < two;i++){
            if(made*5 <= k){
                made*=5;
            }else{
                break;
            }
        }
    }
    // finding 10
    while(1){
        if(made*10 <= k){
            made*=10;
        }else{
            break;
        }
    }
    int rem = k/made;
    made*=rem;
    cout << n*made << '\n';
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
