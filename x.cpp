
#include<bits/stdc++.h>

using namespace std;

void init_1(){
    string s,t;
    cin >> s >> t;
    string ans = "";
    bool flag = false;
    for(int i = 0;i < (int)t.size();i++){
        if(t[i] == 'T'){
            ans += s;
            flag = true;
            break;
        }else{
            ans += 'A';
        }
    }
    if(flag == false){
        cout << -1 << '\n';
        return;
    }
    while((int)ans.size() != ((int)s.size() + (int)t.size()-1)) ans += 'A';
    cout << ans << "\n";
}

signed main() {
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
