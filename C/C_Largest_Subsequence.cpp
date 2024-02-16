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

void init_1(){
    int n;
    cin >> n;
    string str;
    cin >> str;
    unordered_map<int,bool> mp;
    int arr[26] = {0};
    for(int i = 0;i < n;i++){
        arr[str[i]-'a']++;
    }
    int ptr = 25;
    string lxg;
    while(arr[ptr] == 0) ptr--;
    for(int i = 0;i < n;i++){
        arr[str[i]-'a']--;
        if(str[i] == 'a' + ptr){
            lxg+=str[i];
            mp[i] = true;
        }
        while(arr[ptr] == 0) ptr--;
    }
    int ans = 0;
    string t = str;
    sort(all(t));
    for(int i = 0;i < n;i++){
        if(t[i] != str[i]){
            if(mp.count(i)){
            }else{
                cout << -1 << '\n';
                return;
            }
        }
    }
    int cnt = 1;
    for(int i  = 1;i < lxg.size();i++){
        if(lxg[i] == lxg[i-1]) cnt++;
        else break;
    }
    cout << lxg.size()-cnt << "\n";
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
