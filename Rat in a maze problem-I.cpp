class Solution {
void dfs(int row,int col,vector<vector<int>>&m,int n,vector<vector<int>>&vis,vector<string>&str,string ans){
        
        if(row==n-1 && col==n-1){
            str.push_back(ans);
            return;
        }
        vis[row][col]=1;
        
        
        if(col-1>=0 && vis[row][col-1]==0 && m[row][col-1]==1){
            dfs(row,col-1,m,n,vis,str,ans+'L');
        }
         if(row-1>=0 && vis[row-1][col]==0 && m[row-1][col]==1){
            dfs(row-1,col,m,n,vis,str,ans+'U');
        }
         if(row+1<n && vis[row+1][col]==0 && m[row+1][col]==1){
            dfs(row+1,col,m,n,vis,str,ans+'D');
        }
         if(col+1<n && vis[row][col+1]==0 && m[row][col+1]==1){
            dfs(row,col+1,m,n,vis,str,ans+'R');
        }
        
        vis[row][col]=0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        if(m[0][0]==0 || m[n-1][n-1]==0) {
            ans.push_back("-1");
            return ans;
        }
        
        vector<vector<int>>vis(n,vector<int>(n,0));
        vector<string>str;
        dfs(0,0,m,n,vis,str,"");
        sort(str.begin(),str.end());
        return str;
    }
};
