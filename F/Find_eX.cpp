#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int A,B,C,D;
        cin >> A >> B >> C >> D;
        int cnt = 1;
        int a = A%B;
        int b = C%D;
        if(a==b){
            if(a == B-1){
                a = 0;
            }else{
                a++;
            }
            if(b == D-1){
                b = 0;
            }else{
                b++;
            }
        }
        while(1){
            if(a == b){break;}

            if(a == B-1){
                a = 0;
            }else{
                a++;
            }
            if(b == D-1){
                b = 0;
            }else{
                b++;
            }
            cnt++;
        }
        cout << cnt << "\n";
    }
}