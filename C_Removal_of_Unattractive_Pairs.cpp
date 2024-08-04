/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define INF 1e18
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

#define int long long 
#define input(a) for (auto &x : a) cin >> x;
#define print(a) for (auto &x : a) cout << x << " ";cout << "\n";

void init_1(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<int> arr(26,0);
    for(int i = 0;i < str.size();i++){
        arr[str[i]-'a']++;
    }
    vector<int> b;
    for(int i = 0;i < 26;i++){
        if(arr[i]!=0) b.push_back(arr[i]);
    }
    multiset<int> st(all(b));
    while(st.size()!=1 && st.size()!=0){
        // print(b);
        int biggest = *(--st.end());
        int big = *(--(--st.end()));
        // cout << biggest << ' ' << big << '\n';
        st.erase(st.lower_bound(biggest));
        st.erase(st.lower_bound(big));
        biggest--;
        big--;
        if(biggest!=0){
            st.insert(biggest);
        }
        if(big!=0){
            st.insert(big);
        }
    }   
    if(st.size()==0){
        cout << 0 << '\n';
        return;
    }
    cout << *st.begin() << "\n";
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
