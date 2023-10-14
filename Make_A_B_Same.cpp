#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        vector<int> a;
        vector<int> b;
        int change = 0;
        int sum = 0;
        int size;
        cin >> size;
        for(int i = 0; i < size; i++){
            int ok;
            cin >> ok;
            a.push_back(ok);
        }
        sum = accumulate(a.begin(),a.end(),0);
        for(int i = 0; i < size; i++){
            int ok;
            cin >> ok;
            if(ok != a[i]){
                change = 1;
            }
            if(ok == 0 && a[i] == 1){
                sum = 0;
            }
        }
        if(change){
            if(sum){
                cout << "YES" << "\n";
            }else{
                cout << "NO" << "\n";
            }
        }else{
            cout << "YES" << "\n";
        }
    }
}