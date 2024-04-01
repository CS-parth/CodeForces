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
    int n,limit;
    cin >> n >> limit;
    vector<pair<int,int>> pr(n);
    for(int i = 0;i < n;i++){
        int _a,_b;
        cin >> _a >> _b;
        pr[i].first = _b;
        pr[i].second = _a;
    }
    sort(all(pr));
    int ans = 0;
    for(int i = 0;i < n;i++){
        multiset<int> taken,notTaken;
        int sum = pr[i].second;
        if(sum <= limit) ans = max(ans,1ll);
        for(int j = i+1;j < n;j++){
            sum += pr[j].second;
            if(!taken.empty() && !notTaken.empty()){
                if(*taken.rbegin() > *notTaken.begin()){
                    // replace
                    int take = *taken.rbegin();
                    int notTake = *notTaken.begin();
                    taken.extract(take);
                    notTaken.extract(notTake);
                    taken.insert(notTake);
                    notTaken.insert(take);
                    sum = sum - take + notTake;
                }else break;
            }
            while(!taken.empty() && sum + (pr[j].first - pr[i].first) > limit){
                int max = *taken.rbegin();
                taken.extract(max);
                notTaken.insert(max);
                sum -= max;
            }
            if(sum + (pr[j].first - pr[i].first) > limit) continue;
            ans = max(ans,2ll + sz(taken));
        }
    }
    cout << ans << "\n";
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
