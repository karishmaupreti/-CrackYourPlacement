class Solution {
 public:
   
    vector<int> bellman_ford(int V, vector<vector<int>>& edges, int S) {
        // Code here
        vector<int>dist(V,1e8);
        dist[S]=0;
        bool flag=0;
        for(int i=0;i<V-1;i++){
        for(int j=0;j<edges.size();j++){
            int u=edges[j][0];
            int v=edges[j][1];
            int w=edges[j][2];
            if(dist[u]==1e8) continue;
            
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                flag=1;
            }
        } 
        if(flag==0) return dist;
        }
        bool negativeCycle=0;
        
        for(int j=0;j<edges.size();j++){
            int u=edges[j][0];
            int v=edges[j][1];
            int w=edges[j][2];
            if(dist[u]==1e8) continue;
            
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                negativeCycle=1;
                vector<int>ans;
                ans.push_back(-1);
                return ans;
            }
        }
        return dist;
    }
};
