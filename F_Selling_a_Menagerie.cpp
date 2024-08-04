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
    vector<int> affraid(n);
    vector<int> cost(n);
    vector<int> in(n);
    vector<int> out(n,1);
    input(affraid);
    input(cost);
    for(int i = 0;i < n;i++) affraid[i]--;
    for(int i = 0;i < n;i++){
        in[affraid[i]]++;
    }
    queue<int> q;
    // place all the nodes with in[i] = 0
    for(int i = 0;i < n;i++){
        if(in[i] == 0){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        ans.push_back(node);
        // what it out
        int affraidOf = affraid[node];
        in[affraidOf]--; // removing node
        if(in[affraidOf] == 0) q.push(affraidOf);
    }
    int start = 0;
    for(int i = 0;i < n;i++){
        if(in[i] != 0){
            start = i;
            break;
        }
    }
    // cout << start << '\n';
    int mnStart = start;
    int temp = start;
    do{
        // next
        int temp = affraid[temp];
        if(cost[temp] < cost[mnStart]){
            mnStart = temp;
        }
    }while(temp!=start);
    start = mnStart;
    temp = start;
    do{
        ans.push_back(temp);
        temp = affraid[temp];
    }while (temp!=start);
    for(int i = 0;i < n;i++) ans[i]+=1;
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
