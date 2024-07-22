class Solution {
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        queue<pair<int,int>>q;
        for(int j=0;j<m;j++){
            if(mat[0][j]=='O'){
                q.push({0,j});
                mat[0][j]='T';
            }
        }
        for(int i=1;i<n;i++){
            if(mat[i][m-1]=='O'){
                q.push({i,m-1});
                mat[i][m-1]='T';
            }
        }
        for(int j=0;j<m-1;j++){
            if(mat[n-1][j]=='O'){
                q.push({n-1,j});
                mat[n-1][j]='T';
            }
        }
        for(int i=1;i<n-1;i++){
            if(mat[i][0]=='O'){
                q.push({i,0});
                mat[i][0]='T';
            }
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            
            q.pop();
            int row[4]={-1,+1,0,0};
            int col[4]={0,0,-1,+1};
            for(int k=0;k<4;k++){
                int nrow=r+row[k];
                int ncol=c+col[k];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol]=='O'){
                    q.push({nrow,ncol});
                    mat[nrow][ncol]='T';
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]=='O'){
                    mat[i][j]='X';
                }
                else if(mat[i][j]=='T'){
                    mat[i][j]='O';
                }
            }
        }
        return mat;
        
    }
};
