/*Jai Shri Ram*/
/*Jai Bajrang Bali*/
/*Hare krishna hare krishna krishna krishna hare hare hare rama hare rama rama hare hare*/
/*ॐ कृष्णाय वासुदेवाय हरये परमात्मने प्रणत क्लेशनाशाय गोविंदाय नमो नमः*/
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
    vector<char> a(n);
    input(a);
    int color = 1;
    int sum = 0;
    vector<int> colors(n,0);
    for(int i = 0;i < n;i++){
        if(a[i] == ')') sum--;
        else sum++;
        if(sum == 0){
            colors[i] = color;
        }else if(sum == 1){ // starting of BS
            color = 1;
            colors[i] = color;
        }else if(sum == -1){ // starting of RBS
            color = 2;
            colors[i] = color;
        }else{
            colors[i] = color;
        }
        // cout << sum << " " << color << "\n";
    }
    // cout << sum << "\n";
    // it should end
    if(sum == 0){
        set<int> st(colors.begin(),colors.end());
        cout << st.size() << '\n';
        if(st.size() == 1) colors.assign(n,1);
        print(colors);
    }else{
        cout << -1 << "\n";
    }
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
