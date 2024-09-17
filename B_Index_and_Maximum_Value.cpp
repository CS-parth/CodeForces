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

class SegTree {
    public: 
    SegTree(int size,vector<int> &arr){
        n = size;
        tree.assign(4*n+10,{0,0});
        lzy.assign(4*n+10,0);
        build(0,0,n-1,arr);
    }
    void update(int x,int y,int val){
        update(0,0,n-1,x,y,val);
    }
    int mxDis(){
        return tree[0].first;
    }
    private:
    int n;
    vector<pair<int,int>> tree;
    vector<int> lzy;
    void lzy_update(int pos,int l,int r){
        if(l!=r){
            lzy[2*pos+1] = (lzy[2*pos+1]+lzy[pos])%MOD;
            lzy[2*pos+2] = (lzy[2*pos+2]+lzy[pos])%MOD;
        }
        tree[pos].first = (tree[pos].first + lzy[pos])%MOD;
        tree[pos].second = (tree[pos].second + lzy[pos])%MOD;
        lzy[pos] = 0;
        return; 
    }
    void build(int pos,int l,int r,vector<int> &arr){
        if(l==r){
            tree[pos] = {arr[l],arr[l]};
            return;
        }
        int mid = (r-l)/2+l;
        build(2*pos+1,l,mid,arr);
        build(2*pos+2,mid+1,r,arr);
        tree[pos].first = max(tree[2*pos+1].first,tree[2*pos+2].first);
        tree[pos].second = min(tree[2*pos+1].second,tree[2*pos+2].second);
    }
    void update(int pos,int l,int r,int x,int y,int val){
        lzy_update(pos,l,r);
        if(tree[pos].second>=x && tree[pos].first<=y){
            lzy[pos] = (lzy[pos] + val)%MOD;
            lzy_update(pos,l,r);
            return;
        }
        if(tree[pos].second>y || tree[pos].first<x) return;
        int mid = (r-l)/2+l;
        update(2*pos+1,l,mid,x,y,val);
        update(2*pos+2,mid+1,r,x,y,val);
        tree[pos].first = max(tree[2*pos+1].first,tree[2*pos+2].first);
        tree[pos].second = min(tree[2*pos+1].second,tree[2*pos+2].second);
    }
};
void init_1(){
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    input(a);
    sort(all(a));
    // cout << '\n';
    // print(a);
    SegTree *mxTree = new SegTree(n,a);
    for(int i = 0;i < n;i++){
        char ch;
        int l,r;
        cin >> ch >> l >> r;
        if(ch == '+'){
            mxTree->update(l,r,+1);
        }else{
            mxTree->update(l,r,-1);
        }
        cout << mxTree->mxDis() << " ";
    }cout << "\n";
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
