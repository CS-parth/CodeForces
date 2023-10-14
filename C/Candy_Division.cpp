#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int x;
        cin >> x;
        if(x%3 == 0){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
    }
}