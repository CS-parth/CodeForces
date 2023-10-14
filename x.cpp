class Solution {
public:
    int indegree[10001];
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    // making of the adj list
	    vector<vector<int>> adj[N];
	    for(auto &it: prerequisites){
	        adj[it.first].push_back(it.second;
	    }
	    // using toposort to find the cycle in the directed graph
	    queue<int> q;
	    vector<int> a;
	    for(int i = 0;i<N;i++){
	        if(!indegree[i]) q.push(i);
	    }
	    
	    while(!q.empty()){
	       int level = q.front();
	       a.push_back(level);
	       q.pop();
	       for(auto &it: adj[level]){
	           indegree[it]--;
	           if(!indegree[it]) q.push(it);
	       }
	    }
	    
	    if(a.size() == N) return true;
	    return false;
	}
};