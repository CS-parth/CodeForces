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
    string str;
    cin >> str;
    int n = str.size();
    // finding largest 00011
    vector<int> zeroes_start;
    vector<int> ones_end;
    for(int i = 0;i < n;i++){
        if(i==0){
            if(str[i] == '0') zeroes_start.push_back(i);
        }else{
            if(str[i] == '0' && str[i-1] == '1') zeroes_start.push_back(i);
        }
    }
    for(int i = n-1;i>=0;i--){
        if(i==n-1){
            if(str[i] == '1') ones_end.push_back(i);
        }else{
            if(str[i] == '1' && str[i+1] == '0') ones_end.push_back(i);
        }
    }
    reverse(all(ones_end));
    int len = -1;
    int i = -1;
    int j = -1;
    // print(zeroes_start);
    // print(ones_end);
    for(auto &it : zeroes_start){ // iterating on the zerors 
        int idx = upper_bound(all(ones_end),it) - ones_end.begin();
        if(idx == ones_end.size()){
            continue;
        }else{
            if(len <= ones_end[idx]-it+1){
                i = it;
                j = ones_end[idx];
            }
            len = max(len,ones_end[idx]-it+1);
        }
    }
    if(ones_end.size() == 0 || zeroes_start.size() == 0){
        cout << 1 << "\n";
        return;
    }
    if(zeroes_start[0] == 0 && zeroes_start.size() == 1){
        cout << 1 << "\n";
        return;
    }
    int peices = 1;
    if(i==-1){
        i = n;
        j = n;
        peices = 0;
    }
    // cout << i << "\n";
    // cout << j << "\n";
    for(int p = 0;p < i;p++){
        int node = str[p]-'0';
        bool f = false;
        while(node == str[p]-'0'){
            p++;
            f= true;
        }
        if(f) p--;
        peices++;
    }
    for(int p = j+1;p < n;p++){
        int node = str[p]-'0';
        bool f = false;
        while(node == str[p]-'0'){
            p++;
            f= true;
        }
        if(f) p--;
        peices++;
    }
    cout << peices << "\n";
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
