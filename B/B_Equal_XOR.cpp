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
#define input(a) for (int &x : a) cin >> x;
#define print(a) for (auto &x : a) cout << x << " ";cout << "\n";

void init_1(){
    vector<int> a,b;
    int n,k;
    cin >> n >> k;
    vector<int> nums(2*n);
    input(nums);
    unordered_map<int,int> mp1,mp2;
    for(int i = 0;i < n;i++){
        mp1[nums[i]]++;
    }
    for(int i = n;i < 2*n;i++){
        mp2[nums[i]]++;
    }
    // print(nums);
    unordered_map<int,int> mp;
    for(auto &it : mp1){
        if(it.second == 2) a.push_back(it.first); 
        else mp[it.first] = true;
    }
    for(auto &it : mp2){
        if(it.second == 2)  b.push_back(it.first);
        else mp[it.first] = true;
    }
    // print(a);
    // print(b);
    int mn = min({(int)a.size(),(int)b.size(),k});
    // cout << mn << "\n";
    vector<int> nums1,nums2;
    for(int i = 0;i < mn;i++){
        nums1.push_back(a[i]);
        nums1.push_back(a[i]);
        nums2.push_back(b[i]);
        nums2.push_back(b[i]);   
    }
    // if reached
    if(2*k == (int)nums1.size()){
        print(nums1);
        print(nums2);
        return;
    }
    int rem = (2*k-(int)nums1.size());
    // cout << rem << "\n";
    for(auto &it : mp){
        nums1.push_back(it.first);
        nums2.push_back(it.first);
        rem--;
        if(rem == 0){
            print(nums1);
            print(nums2);
            return;
        }
    }
    assert(1 == 0);
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T;
    cin >> T;
    vector<int> a = {1,123,123,12,31234,132};
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
