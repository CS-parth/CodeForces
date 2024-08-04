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
    int n,k;
    cin >> n >> k;
    vector<int> a(k);
    input(a);
    map<int,bool> isMarked;
    for(int i = 0;i < k;i++){
        isMarked[(a[i]-1)] = true;
    }
    vector<int> adj[n];
    for(int i = 0;i < n-1;i++){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(k==1){
        cout << 0 << "\n";
        return;
    }
    // cout << "end" << "\n";
    queue<tuple<int,int,int>> q;
    q.push({a[0]-1,0,-1});
    int lst = a[0]-1;
    while(!q.empty()){
        int node = get<0>(q.front());
        int dis = get<1>(q.front());
        int parent = get<2>(q.front());
        q.pop();
        for(auto &it : adj[node]){
            if(it!=parent){
                q.push({it,dis+1,node});
                if(isMarked.count(it)){
                    lst = it;
                }
            }
        }
    }
    // cout << lst << '\n';
    q.push({lst,0,-1});
    int lst_dis = 0;
    while(!q.empty()){
            int node = get<0>(q.front());
            int dis = get<1>(q.front());
            int parent = get<2>(q.front());
            q.pop();
            for(auto &it : adj[node]){
                if(it!=parent){
                    q.push({it,dis+1,node});
                    if(isMarked.count(it)){
                        lst = it;
                        lst_dis = dis+1;
                    }
                }
            }
    }
    cout << (lst_dis+1)/2 << "\n";
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
