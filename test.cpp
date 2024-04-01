#include<bits/stdc++.h>

using namespace std;

int main(){
    multiset<int> st;
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(5);
    st.insert(4);
    st.insert(4);
    st.insert(4);
    cout << st.size() << "\n";
    st.erase(5);
    cout << st.size() << "\n";
}