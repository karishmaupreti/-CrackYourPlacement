class Solution {
public:
bool isPossible(vector<vector<int>>grid,int time,int n,int i,int j,vector<vector<int>>&v){

    if(i==n-1 && j==n-1) return true;

    v[i][j]=1;
    int row[4]={0,-1,+1,0};
    int col[4]={-1,0,0,+1};
    for(int k=0;k<4;k++){
        int nrow=i+row[k];
        int ncol=j+col[k];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && v[nrow][ncol]==0 && grid[nrow][ncol]<=time && grid[i][j]<=time){
            if(isPossible(grid,time,n,nrow,ncol,v)) return true;
        }
    }
    return false;
}
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        int low=0,high=n*n-1;
        while(low<high){
            int mid=(low+high)/2;
            vector<vector<int>>v(n,vector<int>(n,0));
            if(isPossible(grid,mid,n,0,0,v)){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
