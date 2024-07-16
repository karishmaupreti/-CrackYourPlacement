class Solution {
public:
    void dfs(int node,vector<vector<int>>&adj2,vector<int>&vis,vector<int>&ans){
        vis[node]=1;
        
        ans.push_back(node);
        for(int i=0;i<adj2[node].size();i++){
            if(vis[adj2[node][i]]==0){
                dfs(adj2[node][i],adj2,vis,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<vector<int>>adj2(V);
        for(int i=0;i<V;i++){
            for(int j=0;j<adj[i].size();j++){
                adj2[i].push_back(adj[i][j]);
            }
        }
        vector<int>vis(V,0);
        dfs(0,adj2,vis,ans);
        return ans;
        
    }
};
