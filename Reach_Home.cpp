#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int A,B;
        cin >> A >> B;
        if(A*5 >= B){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}