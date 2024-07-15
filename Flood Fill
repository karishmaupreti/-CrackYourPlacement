class Solution {
public:
  
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int pixel=image[sr][sc];
          image[sr][sc]=color;
          queue<pair<int,int>>q;
          q.push({sr,sc});
          vis[sr][sc]=1;
          
          while(!q.empty()){

            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            
            int row[4]={0,-1,+1,0};
             int col[4]={-1,0,0,+1};
             
             for(int k=0;k<4;k++){
                 int nrow=row[k]+i;
                  int ncol=col[k]+j;
             if(nrow>=0 && nrow<image.size() && ncol>=0 && ncol<image[0].size() && vis[nrow][ncol]==0 && image[nrow][ncol]==pixel){
            vis[nrow][ncol]=1;
            image[nrow][ncol]=color;
            q.push({nrow,ncol});
          }
        }
    }
        return image;
    }
          
};
