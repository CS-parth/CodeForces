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

int parent[1000002];
int value[1000002];
int find(int num){
    while(num != parent[num]) num = parent[num];
    return num;
}
void init_1(){
    for(int i = 0;i < 1000002;i++) parent[i] = i;
    for(int i = 0;i < 1000002;i++) value[i] = 1;
    int n;
    int m;
    cin >> n >> m;
    vector<vector<char>> in(n,vector<char>(m,0));
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> in[i][j];
        }
    }
    map<pair<int,int>,int> mp; // idx,size
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    int k = 0;
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            mp[{i,j}] = k++;
        }
    }
    function<void(int,int)>dfs = [&](int i,int j){
        if(vis[i][j]) return;
        vis[i][j] = true;
        // four neighbours
        int x[] = {1,0,-1,0};
        int y[] = {0,1,0,-1};
        for(int k = 0;k < 4;k++){
            int ni = i + x[k];
            int nj = j + y[k];
            if(ni < n && ni >= 0 && nj < m && nj >= 0 && in[ni][nj] == '.'){
                // unit i,j an ni,nj
                int a = find(mp[{i,j}]);
                int b = find(mp[{ni,nj}]);
                if(a != b){ // unite them
                    if(value[a] > value[b]){
                        swap(a,b);
                    }
                    parent[a] = b;
                    value[b] += value[a];
                }
                dfs(ni,nj); // unite its neigbours
            }
        }
    };
    // cout << 1 << "\n";
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(in[i][j] == '.' && !vis[i][j]){
                dfs(i,j);
            }
        }
    }
    
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            if(in[i][j] == '*'){
                set<int> st;
                int x[] = {1,0,-1,0};
                int y[] = {0,1,0,-1};
                for(int k = 0;k < 4;k++){
                    int ni = i + x[k];
                    int nj = j + y[k];
                    if(ni < n && n >= 0 && nj < m && nj >= 0 && in[ni][nj] == '.'){
                        st.insert((mp[{ni,nj}]));
                    }
                }
                int ans = 0;
                for(auto &it : st) ans += value[it];
                cout << ans;
            }else{
                cout<<'.';
            }
        }cout << "\n";
    }
}

signed main() {
std::ios::sync_with_stdio(false);
    // fastio();
    int T = 1;
    // cin >> T;
    for(int k = 0 ; k < T ; k++){
        init_1();  
    }
}
