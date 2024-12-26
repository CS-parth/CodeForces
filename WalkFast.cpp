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
    // N, A, B, C, D, P, Q, Y .
    int n,a,b,c,d,p,q,y;
    cin >> n >> a >> b >> c >> d >> p >> q >> y;
    a--;
    b--;
    c--;
    d--;
    vector<int> v(n);
    input(v);
    int mn = *min_element(all(v));
    int mx = *max_element(all(v));
    map<int,int> mp;
    map<int,int> dis;
    map<int,int> idx;
    for(int i = 0;i < v.size();i++){
        idx[v[i]] = i;
    }
    for(int i = 0;i < v.size();i++){
        dis[v[i]] = 1e9;
    }
    dis[a] = 0;
    queue<pair<int,int>> pq;
    pq.push({0,v[a]});
    while(!pq.empty()){
        int time = -1*get<0>(pq.front());
        int node = get<1>(pq.front());
        int i = idx[node];
        pq.pop();
        if(mp.count(node)) continue;
        mp[node] = 1;
        if((i-1 >= 0) && dis[v[i-1]]>(time+p*abs(node-v[i-1]))){
            dis[v[i-1]] = (time+p*abs(node-v[i-1]));
            pq.push({-1*(dis[dis[v[i-1]]]),v[i-1]});
        }
        if((i+1 < n) && dis[v[i+1]]>(time+p*abs(node-v[i+1]))){
            dis[v[i+1]] = (time+p*abs(node-v[i+1]));
            pq.push({-1*(dis[v[i+1]]),v[i+1]});
        }
        if(node == v[c] && dis[d]>max(time,y)+q*(abs(v[c]-v[d]))){
            dis[d] = max(time,y)+q*(abs(v[c]-v[d]));
            pq.push({-1*(dis[d]),v[d]});
        }
    }   
    cout << dis[b] << "\n";
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
