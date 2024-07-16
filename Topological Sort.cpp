class Solution{
public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>ans;
	    
	    vector<int>indeg(V,0);
	    
	    for(int i=0;i<V;i++){
	        for(int j=0;j<adj[i].size();j++){
	            
	            indeg[adj[i][j]]++;
	        }
	    }
	    
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(indeg[i]==0){
	            q.push(i);
	        }
	    }
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
	    return ans;
	}
};
