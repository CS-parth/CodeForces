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
    string str1;
    string str2;
    cin >> str1 >> str2;
    int t,q;
    cin >> t >> q;
    int i = 0;
    int hash_1 = 0;
    int hash_2 = 0;
    int const m = 1e9+7;
    int const p = 31;

    vector<int> pow_p(str1.size(),0);
    for(int i = 0;i < str1.size();i++){
        if(i==0){
            pow_p[i] = 31;
        }else{
            pow_p[i] = (pow_p[i] + (pow_p[i-1]*31)%MOD)%MOD;
        }
    }
    int hash_A = 0;
    int hash_B = 0;
    for(int i = 0;i < str1.size();i++){
        hash_A = (hash_A + (pow_p[i]*(str1[i]-'a'))%MOD)%MOD;
        hash_B = (hash_B + (pow_p[i]*(str2[i]-'a'))%MOD)%MOD;
    }
    cout << hash_A << " " << hash_B << "\n";
    queue<vector<int>> qu;
    int time = 0;
    auto remove = [&](int ){

    };
    for(int j = 0;j < q;j++){
        time++;
        cout << "Time : " << time << "\n";
        int op;
        cin >> op;
        // unblock all the members from the queue
        while(!qu.empty()){
            int nodeTime = qu.front()[0];
            if((time-nodeTime) == t){
                cout << "POPING" << "\n";
                qu.pop();
                int valA = qu.front()[1];
                int valB = qu.front()[2];
                hash_A += valA;
                hash_B += valB;
            }else break;
        }
        switch (op){
            case 1:
                int pos;
                cin >> pos;
                pos--;
                // Block the hash
                hash_A -= pow_p[pos]*(str1[pos]-'a');
                hash_B -= pow_p[pos]*(str2[pos]-'a');
                qu.push({time,(pow_p[pos]*(str1[pos]-'a')),(pow_p[pos]*(str2[pos]-'a'))});
                break;
            case 2:
                int op1,pos1,op2,pos2;
                cin >> op1 >> pos1 >> op2 >> pos2;
                pos1--;
                pos2--;
                if(op1 == 1 && op2 == 1){
                    swap(str1[pos1],str1[pos2]);
                    // Remove Old
                    hash_A = (hash_A - MOD + ((str1[pos1]-'a')*pow_p[pos1])%MOD)%MOD;
                    hash_A = (hash_A - MOD + ((str1[pos2]-'a')*pow_p[pos2])%MOD)%MOD;
                    // Add new Vals 
                    hash_A = (hash_A + ((str1[pos1]-'a')*pow_p[pos2])%MOD)%MOD;
                    hash_A = (hash_A + ((str1[pos2]-'a')*pow_p[pos1])%MOD)%MOD;
                }else if(op1 == 2 && op2 == 2){
                    swap(str2[pos1],str2[pos2]);
                    // Remove old
                    hash_B = (hash_B - MOD + (str2[pos1]*())); 
                }else if(op1 == 1 && op2 == 2){
                    swap(str1[pos1],str2[pos2]);
                }else{  
                    swap(str2[pos1],str1[pos2]);
                }
                cout << str1 << " " << str2 << "\n";
                break; 
            case 3:
                // just match the two hashes
                if(hash_A == hash_B){
                    cout << "YES" << '\n';
                }else{
                    cout << "NO" << "\n";
                }
                break;
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
