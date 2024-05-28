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
    int idx = 0; // This go till n
    int left_cnt_1 = 0;
    int left_cnt_0 = 0;
    int right_cnt_1 = 0;
    int right_cnt_0 = 0;
    for(int i = 0;i < n;i++){
        if(str[i] == '0'){
            right_cnt_0++;
        }else{
            right_cnt_1++;
        }
    }
    vector<pair<double,int>> vec;

    while(idx < n+1){
        // cout << left_cnt_0 << " " << left_cnt_1 << " " << " " << right_cnt_0 << " " << right_cnt_1 << "\n";
        // calculate
        // left --> 0 wants to live in left
        int zero_cnt = left_cnt_0;
        int total = left_cnt_0+left_cnt_1;
        bool save = true;
        // atleast ceil of the total/2
        if(zero_cnt < ceil((double)((double)total/(double)2))){
            // FAIL
            save = false;
        }
        // right --> 1 want to live in right
        int one_cnt = right_cnt_1;
        total = right_cnt_0+right_cnt_1;
        // atleast ceil of the total/2
        if(one_cnt < ceil((double)((double)total/(double)2))){
            // FAIL
            save = false;
        }
        // save the answer
        if(save) vec.push_back({(double)abs((double)n/(double)2-(double)idx),idx});
        if(idx==n) break;
        // change the left and right
        if(str[idx]=='0'){
            right_cnt_0--;
            left_cnt_0++;
        }else{
            right_cnt_1--;
            left_cnt_1++;
        }
        idx++;
    }
    auto asIlike = [](const pair<double,int> &a,const pair<double,int> &b){
        if(a.first != b.first){
            return (a.first < b.first); // for minimizing the abs(n/2-i)
        }else{
            return (a.second < b.second); // for smaller index
        }
    };
    // cout << vec.size() << "\n";
    sort(all(vec),asIlike);
    // for(int i = 0;i < vec.size();i++){
    //     cout << vec[i].first << " " << vec[i].second << "\n";
    // }
    int top = -1;
    if(!vec.empty()) top = vec.begin()->second;
    cout << top << "\n";
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
