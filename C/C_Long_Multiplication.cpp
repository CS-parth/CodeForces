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
    string str1;
    string str2;
    cin >> str1 >> str2;
    n = str1.size();
    int sum1 = 0;
    int sum2 = 0;
    sum1 += str1[0]-'9';
    sum2 += str2[0]-'9';
    for(int i = 1;i < n;i++){
        int op1 = abs(((sum1 + str1[i]-'9') - (sum2 + str2[i]-'9')));
        int op2 = abs(((sum1 + str2[i]-'9') - (sum2 + str1[i]-'9')));
        // cout << str1 << " " << str2 << " " << op1 << " " << op2 << '\n';
        if(op1 <= op2){
            // no change
            sum1 = (sum1 + str1[i]-'9')%MOD;
            sum2 = (sum2 + str2[i]-'9')%MOD;
        }else{
            // change
            swap(str1[i],str2[i]);
            sum1 = (sum1 + str2[i]-'9')%MOD;
            sum2 = (sum2 + str1[i]-'9')%MOD;
        }
    }
    for(int i = 0;i < n;i++){
        if(str1[i]-'9' > str2[i]-'9'){
            cout << str1 << "\n";
            cout << str2 << "\n";
            return;
        }else if(str1[i]-'9' < str2[i]-'9'){
            cout << str2 << "\n";
            cout << str1 << "\n";
            return;
        }
    }
    cout << str1 << "\n";
    cout << str2 << "\n";
    return;
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
