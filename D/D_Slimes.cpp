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
    vector<int> a(n);
    input(a);
    vector<int> pi(n);
    auto fill_pi = [&](){
        for(int i = 0;i < n;i++){
            if(i==0) pi[i] = a[i];
            else pi[i] = pi[i-1] + a[i];
        }
    };
    fill_pi();
    vector<int> ans(n,INF);
    vector<int> same(n);
    auto fill_same = [&](){
        for(int i = n-1;i >= 0;i--){
            int val = a[i];
            int j = i;
            while(j>= 0 && val == a[j]){
                same[j--] = i;
            }
            i = j+1;
        }
    };
    fill_same();
    auto BS = [&](int l,int r,int idx){
        while(r-l>1){
            int mid = (r+l)>>1;
            int prefix = pi[idx-1];
            if(mid!=0) prefix -= pi[mid-1];
            if(prefix > a[idx]){
                l = mid;
            }else{
                r = mid;
            }
        }
        int prefix = pi[idx-1];
        if(r!=0) prefix -= pi[r-1];
        if(prefix > a[idx]) return r;
        prefix = pi[idx-1];
        if(l!=0) prefix -= pi[l-1];
        if(prefix > a[idx]) return l;
        return -1ll;//not found case
    };
    for(int i = 1;i < n;i++){
        if(a[i] < a[i-1]){
            ans[i] = 1;
            continue;
        }
        // find possible r from 0 to i-1
        int idx = -1; // finding indx for binary search
        int l = 0;
        int r = i-1;
        while(r-l>1){
            int mid = (r+l)>>1;
            if(same[mid] < i-1){
                l = mid;
            }else{
                r = mid;
            }
        }
        if(same[r] < i-1){
            idx = r;
        }else if(same[l] < i-1){
            idx = l;
        }
        if(idx == -1) continue;
        idx = BS(0,idx,i);
        if(idx != -1) ans[i] = i-idx;
    }
    // print(ans);
    reverse(all(a));
    same.assign(n,0);
    fill_same();
    pi.assign(n,0);
    fill_pi();
    // print(a);
    // print(pi);
    // print(same);

    auto rev = [n](int idx){
        return n-1-idx;
    };
    for(int i = 1;i < n;i++){
        if(a[i] < a[i-1]){
            ans[rev(i)] = 1;
            continue;
        }
        // find possible r from 0 to i-1
        int idx = -1; // finding indx for binary search
        int l = 0;
        int r = i-1;
        while(r-l>1){
            int mid = (r+l)>>1;
            if(same[mid] < i-1){
                l = mid;
            }else{
                r = mid;
            }
        }
        if(same[r] < i-1){
            idx = r;
        }else if(same[l] < i-1){
            idx = l;
        }
        // cout << "valid R : " << idx << '\n';
        if(idx == -1) continue;
        idx = BS(0,idx,i);
        // cout << "from BS : " << idx << '\n';
        if(idx != -1) ans[rev(i)] = min(i-idx,ans[rev(i)]);
    }
    for(int i = 0;i < n;i++){
        if(ans[i] == INF) ans[i] = -1;
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
