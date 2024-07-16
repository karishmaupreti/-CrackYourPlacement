class Solution {
public:
   bool dfs(int i,int j,vector<vector<char>>&board,vector<vector<int>>&vis,string word,int    count){
    if(count==word.size()) return true;
    vis[i][j]=1;
    
    int row[4]={0,-1,+1,0};
    int col[4]={-1,0,0,+1};
     for(int k=0;k<4;k++){
        int nrow=i+row[k];
        int ncol=j+col[k];
        if(nrow>=0 && nrow<board.size() && ncol>=0 && ncol<board[0].size() && vis[nrow][ncol]==0 && board[nrow][ncol]==word[count]){
            vis[nrow][ncol]=1;
            if(dfs(nrow,ncol,board,vis,word,count+1)) return true;
        }
     }
     vis[i][j] = 0;
    return false;
   }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    if(dfs(i,j,board,vis,word,1)) return true;
                }
            }
        }
        return false;
    }
};
