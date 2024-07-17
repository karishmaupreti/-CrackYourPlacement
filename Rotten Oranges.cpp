class Solution {
int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
       queue<pair<int,pair<int,int>>>st;
        vector<vector<int>>ans(n,vector<int>(m,-1));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==0){
                    ans[i][j]=0;
                }
                else if(grid[i][j]==2){
                    ans[i][j]=2;
                    st.push({i,{j,0}});
                }
            }
        }
        int count=0;
    
        while(!st.empty()){
            int i=st.front().first;
            int j=st.front().second.first;
            int t=st.front().second.second;
            count=max(count,t);
            st.pop();
            int row[4]={0,-1,+1,0};
            int col[4]={-1,0,0,+1};
            
            for(int k=0;k<4;k++){
                int nrow=row[k]+i;
                int ncol=col[k]+j;
                
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol]==-1){
                    ans[nrow][ncol]=2;
                    st.push({nrow,{ncol,t+1}});
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]==-1) return -1;
            }
        }
        return count;
        
    }
};
