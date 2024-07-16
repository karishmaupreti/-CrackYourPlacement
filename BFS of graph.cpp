class Solution {
public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       vector<int>ans;
       vector<vector<int>>adj1(V);
       for(int i=0;i<V;i++){
           for(int j=0;j<adj[i].size();j++){
           adj1[i].push_back(adj[i][j]);
       }
       }
       
        queue<int>q;
        vector<int>vis(V,0);
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int ele=q.front();
            q.pop();
            ans.push_back(ele);
            for(int i=0;i<adj[ele].size();i++){
                if(vis[adj[ele][i]]==0){
                    vis[adj[ele][i]]++;
                    q.push(adj[ele][i]);
                }
            }
        }
        return ans;
        
    }
};
