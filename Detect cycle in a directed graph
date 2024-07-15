class Solution{
public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
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
        int count=0;
        while(!q.empty()){
            int ele=q.front();
            q.pop();
            count++;
            for(int i=0;i<adj[ele].size();i++){
                indeg[adj[ele][i]]--;
                if(indeg[adj[ele][i]]==0){
                    q.push(adj[ele][i]);
                }
            }
        }
        if(count==V ) return 0;
        return 1;
    }
};
