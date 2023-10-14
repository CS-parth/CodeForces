#include <bits/stdc++.h>
#define loop(i,n) for(int i = 0 ; i < n ; i++)
using namespace std;
int main (){
    int T;
    cin >> T;
    for(int i = 0 ; i < T ; i++){
        multiset<int> st;
        int x;
        cin >> x;
        while(x--){
            int ok;
            cin >> ok;
            st.insert(ok);
        }
        st.erase(*st.begin());
        cout << st.size() << "\n";
    }
}