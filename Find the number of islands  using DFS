class Solution {
 public:
    // Function to find the number of islands.
    void dfs(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&vis){
        vis[i][j]=1;
        int row[8]={-1,0,+1,-1,+1,-1,0,+1};
        int col[8]={-1,-1,-1,0,0,+1,+1,+1};
        
        for(int k=0;k<8;k++){
            int nrow=row[k]+i;
            int ncol=col[k]+j;
            if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && grid[nrow][ncol]=='1' && vis[nrow][ncol]==0){
                dfs(nrow,ncol,grid,vis);
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    dfs(i,j,grid,vis);
                    count++;
                }
            }
        }
        return count;
    }
};
