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


bool isCheck(vector<int> b,int mid){
    int collect = 0;
    // print(b);
    // cout << mid << '\n';
    for(int i = 1;i < b.size();i++){
        if(b[i]>mid) collect+=(b[i]-mid);
    }
    for(int i = 1;i < b.size();i++){
        if(b[i]<mid) collect -= (mid-b[i])/2;
    }
    // cout << collect << "\n";
    return (collect<=0);
}
void init_1(){
    int n,m;
    cin >> n >> m;
    vector<int> a(m);
    input(a);
    int low = 1; 
    int high = 1e9;
    vector<int> b(n+1,0);
    for(int i = 0;i < m;i++) b[a[i]]++; 
    while(high - low > 1){
        int mid = (high+low)/2;
        // let's say we have mid hours 
        if(isCheck(b,mid)){
            high = mid;
        }else{
            low = mid;
        }
    }
    if(isCheck(b,low)){
        cout << low << "\n";
    }else{
        cout << high << "\n";
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
