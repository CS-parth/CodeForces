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

void init_1(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    input(a);
    priority_queue<pair<int,int>> pq;
    for(int i = 0;i < a.size();i++){
        string str = to_string(a[i]);
        int digits = str.size();
        int j = str.size()-1;
        int cnt = 0;
        while(j>=0 && str[j]=='0') {
            cnt++;
            j--;
        }
        pq.push({cnt,digits});
    }
    int turn = 0;
    while(pq.size()>1){
        if(turn == 0){
            int zero = pq.top().first;
            int digit = pq.top().second;
            pq.pop();
            pq.push({0,digit-zero});
        }else{
            int zero1 = pq.top().first;
            int digit1 = pq.top().second;
            pq.pop();
            int zero2 = pq.top().first;
            int digit2 = pq.top().second;
            pq.pop();
            pq.push({zero2,digit1+digit2});
        }
        turn = turn^1;
    }
    if(turn == 0){
        int zero = pq.top().first;
        int digit = pq.top().second;
        pq.pop();
        pq.push({0,digit-zero});
    }
    assert(pq.size()==1);
    if(pq.top().second >= (m+1)){
        cout << "Sasha" << '\n';
    }else{
        cout << "Anna" << "\n";
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
