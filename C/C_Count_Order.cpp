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

int n;
void create_perm(vector<int> v,int mask){
    if(mask == 0){
        idx++;
        for(int i = 0;i <= n;i++){
            if(i == n){
                __a = idx;
                break;
            }
            if(a[i] == v[i]) continue;
            else break;
        }
       for(int i = 0;i <= n;i++){
            if(i == n){
                __b = idx;
                break;
            }
            if(b[i] == v[i]) continue;
            else break;
        }
    }
    for(int i = 0;i < n;i++){
        if(mask&(1<<i)){
            v.push_back(i+1);
            create_perm(v,mask^(1<<i));
            v.pop_back();
        }
    }
}
void init_1(){
    // int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    input(a);
    input(b);
    vector<int> permutaion(n);
    for(int i = 1;i <= n;i++) permutaion[i-1] = i;
    int __a;
    int __b;
    int i = 0;
    do{
        // for(int i = 0;i < n;i++) cout << permutaion[i] << " ";
        cout << "\n";
        if(permutaion == a) __a = i;
        if(permutaion == b) __b = i;
        i++;
    }while(next_permutation(permutaion.begin(),permutaion.end()));
    cout << abs(__a-__b) << "\n";
}   

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
