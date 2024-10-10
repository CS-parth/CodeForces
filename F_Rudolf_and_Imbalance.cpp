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
#define print(a) for (auto &x : a) cout << x << " ";cout << "\t";

void init_1(int idx){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    vector<int> c(k);
    input(a);
    input(b);
    input(c);
    // if(idx == 10){
    //     cout << "a\t";
    //     print(a);
    //     cout << "b\t";
    //     print(b);
    //     cout << "c\t";
    //     print(c);
    //     return;
    // }
    // sort(all(a));
    sort(all(b));
    sort(all(c));
    int mx = -1e9;
    int need = 0;
    for(int i = 0;i < n-1;i++){
        mx = max(mx,a[i+1]-a[i]);
    }
    int cnt = 0;
    int left = -1;
    int right = -1;
    for(int i = 0;i < n-1;i++){
        if(a[i+1]-a[i] == mx){
            left = a[i];
            right = a[i+1];
            cnt++;
            need = a[i] + mx/2; 
        }
    }
    // cout << need << "\n";
    if(cnt == 0 || cnt > 1){
        cout << mx << "\n";
    }else{
        int ans = mx;
        for(int i = 0;i < m;i++){
            int low = 0;
            int high = k-1;
            while((high - low) > 1){
                int mid = (high + low)/2;
                int val = c[mid] + b[i];
                if(val<=need){
                    low = mid;
                }else{
                    high = mid;
                }
            }
            // high is what we want 
            if((c[low] + b[i]) == need){
                // cout << "need " << i << " " << c[high] + b[i] << "\n";
                int temp = need;
                ans = min(ans,max(temp-left,right-temp));
                break;
            }else{
                if(low-1 >= 0){
                    int temp = c[low-1]+b[i];
                    ans = min(ans,max(temp-left,right-temp));
                }
                int temp = c[low]+b[i];
                ans = min(ans,max(temp-left,right-temp));
                if(low+1 < k){
                    int temp = c[low+1]+b[i];
                    ans = min(ans,max(temp-left,right-temp));
                }
            }
        }
        int secondMx = -1;
        for(int i = 0;i < n-1;i++){
            if(a[i+1]-a[i] != mx){
                secondMx = max(secondMx,a[i+1]-a[i]);
            }
        }
        if(secondMx == -1){
            cout << ans << "\n";
        }else{
            cout << max(ans,secondMx) << '\n';
        }
    }
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1(k);  
    }
}
