#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        multiset<int,greater<int>> s;
        int x;
        cin >> x;
        long long int sum = 0;
        while(x--){
            int y;
            cin >> y;
            if(y){
                s.insert(y);
            }else{
                if(s.empty()){
                }else{
                    sum+= *s.begin();
                    s.erase(s.begin());
                }
            }
        }
        cout << sum << "\n";
    }
}