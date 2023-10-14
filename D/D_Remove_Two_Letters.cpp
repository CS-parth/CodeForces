#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        int x;
        cin >> x;
        string str;
        cin >> str;
        set<string> str_set;
        int k;
        for(k = 0; k < x-1; k++){
            string ok = str;
            ok.erase(ok.begin() + k);
            ok.erase(ok.begin() + k);
            str_set.insert(ok);
        }
        cout << str_set.size() << "\n";
    }
}