class Solution {
public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int node,vector<int>adj[],vector<int>&vis){
        queue<pair<int,int>>q;
        q.push({node,-1});
        vis[node]=1;
        while(!q.empty()){
            int ele=q.front().first;
            int parent=q.front().second;
            
            q.pop();
            for(int i=0;i<adj[ele].size();i++){
                if(adj[ele][i]==parent) continue;
                if(vis[adj[ele][i]]==1) return 1;
                
                vis[adj[ele][i]]=1;
                q.push({adj[ele][i],ele});
            }
        }
        return 0;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(vis[i]==0){
           if( bfs(i,adj,vis)==1) return 1;
            }
        }
        return 0;
    }
};
