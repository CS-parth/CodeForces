#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int x;
        vector<int> v;
        cin >> x;
        int square = x*x;
        int k,j;
        for(k = 1,j = square; k <= square/2;k++,j--){
            v.push_back(k);
            v.push_back(j);
        }
        if(square&1){
            v.push_back((square+1)/2);
        }
        int temp = v.back();
        v[0] = temp;
        v[v.size() - 1] = 1;
        int cnt = 0;
        for(int r = 0; r < x; r++){
            for(int c = 0; c < x; c++){
                cout << v[cnt] <<" ";
                cnt++;
            }
        cout << "\n";
        }
    }
}