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

bool is_valid(vector<pair<int,int>> pr,int k){
    int l = 0;
    int r = k;
    // cout << "K : " << k << "\n";
    for(int i = 0;i < pr.size();i++){
        // cout << l << " " << r << "\n";
        // check if ith segment overlaps with the range or not
        if((pr[i].first>r) || (pr[i].second<l)) return false;
        if(pr[i].first >= l && pr[i].second <= r){
            l = pr[i].first;
            r = pr[i].second;
        }else if(pr[i].first >= l){
            l = pr[i].first;
        }else if(pr[i].second <= r){
            r = pr[i].second;
        }
        // change the range
        l = max(0ll,l-k);
        r = min((long long)1e9+1,r+k);
    }
    return true;
}
void init_1(){
    int n;
    cin >> n;
    vector<pair<int,int>> pr(n);
    for(int i = 0;i < n;i++){
        int a,b;
        cin >> a >> b;
        pr[i].first = a;
        pr[i].second = b;
    }
    auto BS = [&](int l,int r){
        while(r-l>1){
            int mid = (r+l)/2;
            if(is_valid(pr,mid)){
                r = mid;
            }else{
                l = mid;
            }
        }
        if(is_valid(pr,l)) return l;
        return r;
    };
    cout << BS(0,1e9) << '\n';
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
