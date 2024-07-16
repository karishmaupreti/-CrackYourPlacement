class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<vector<int>>adj(N);
	    vector<int>indeg(N,0);
	    for(int i=0;i<P;i++){
	        int u=prerequisites[i].first;
	        int v=prerequisites[i].second;
	        adj[u].push_back(v);
	        indeg[v]++;
	    }
	    queue<int>q;
	   for(int i=0;i<N;i++){
	       if(indeg[i]==0){
	           q.push(i);
	       }
	   }
	   vector<int>ans;
	   while(!q.empty()){
	       int ele=q.front();
	       ans.push_back(ele);
	       q.pop();
	       
	       for(int i=0;i<adj[ele].size();i++){
	           indeg[adj[ele][i]]--;
	           if(indeg[adj[ele][i]]==0){
	               q.push(adj[ele][i]);
	           }
	       }
	   }
	   if(ans.size()==N) return true;
	   return false;
	}
};
