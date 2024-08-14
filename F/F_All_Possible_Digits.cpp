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
    int n,p;
    cin >> n >> p;
    vector<int> a(n);
    input(a);
    int num1 = -1;
    int num2 = -1;
    int lsb = a[n-1];
    set<int> st;
    for(int i  = 0;i < n;i++){
        st.insert(a[i]);
    }
    for(int i =1;i<=105;i++){
        int num = lsb - i;
        if(num>=0){
            if(!st.count(num)){
                if(num2==-1) num2 = num;
                else if(num1==-1) num1 = num;
                else break;
            }
        }else break;
    }
    int nonLst = 0;
    for(int i = n-2;i >= 0;i--){
        if(a[i]!=p-1){
            nonLst = a[i];
            break;
        }
    }
    // cout << num1 << " " << num2 << "\n";
    if(num2!=-1){
        if(num2 == (nonLst+1)%p){
            if(num1!=-1){
                cout << p-lsb + num1 << "\n";
            }else{
                cout << p-lsb << '\n';
            }
        }else{
            cout << p-lsb + num2 << "\n";
        }
    }else{
        int num3 = -1;
        for(int i = p-1;i!=lsb;i--){
            if(!st.count(i)){
                num3 = i;
                break;
            }
        }
        if(num3!=-1){
            cout << num3-lsb << "\n";
        }else{
            cout << 0 << "\n";
        }
    }
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
