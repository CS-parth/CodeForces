#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int size,K;
        map<char,int> mp;
        cin >> size >> K;
        for(int i = 0; i < size; i++){
            char x;
            cin >> x;
            mp[x]++;
        }
        //int diff = K;
        int burl = 0;
        for(int i = 0; i < 26; i++){
            burl+=min(mp['a' + i],mp['A'+i]);
            if(mp['a'+ i] > mp['A'+i]){
                mp['a' + i] -= mp['A' + i];
                mp['A'+ i] = 0;
                if(K-(mp['a'+ i]/2) >= 0){
                    K -= mp['a' + i]/2;
                    burl += mp['a' + i]/2;
                }else{
                    burl+=K;
                    goto end;
                }
            }else{
                mp['A' + i] -= mp['a' + i];
                mp['a'+ i] = 0;
                if(K-(mp['A'+ i]/2) >= 0){
                    K -= mp['A' + i]/2;
                    burl += mp['A' + i]/2;
                }else{
                    burl+=K;
                    goto end;
                }
            }
        }
        end:
        cout << burl << "\n";
    }
}