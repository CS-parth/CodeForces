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
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(k);
    vector<int> b(k);
    input(a);input(b);
    vector<double> s(k);
    int lst_dis = 0;
    int lst_time = 0;
    for(int i = 0;i < k;i++){
        s[i] = (double)((double)(b[i]-lst_time)/(double)(a[i]-lst_dis));
        lst_dis = a[i];
        lst_time = b[i];
    }
    // print(s);
    vector<int> ans;
    for(int i = 0;i < q;i++){
        int x;
        cin >> x;
        auto itr = lower_bound(all(a),x);
        if(*itr == x){
            int idx = itr-a.begin();
            ans.push_back(b[idx]);
        }else{
            int idx = itr-a.begin()-1;
            int rem_dis = (idx == -1) ? x : x-a[idx];
            double speed = (double)s[idx+1];
            double time = (double)((double)rem_dis*(double)speed);
            // cout << idx << " " << rem_dis << " " << speed << " " << time << "\n";
            time = (double)time + (double)((idx == -1) ? (double)0 : (double)b[idx]);
            // cout << time << "\n";
            ans.push_back(floor(time));
        }
    }
    print(ans);
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
