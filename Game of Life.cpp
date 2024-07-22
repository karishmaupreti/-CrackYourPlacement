class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r=board.size();
        int c=board[0].size();
        int row[8]={-1,0,+1,-1,+1,-1,0,+1};
        int col[8]={-1,-1,-1,0,0,+1,+1,+1};

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int live_count=0;
                for(int k=0;k<8;k++){
                    int nrow=i+row[k];
                    int ncol=j+col[k];
                    if(nrow>=0 && nrow<r && ncol>=0 && ncol<c && abs(board[nrow][ncol])==1){
                        live_count++;
                    }
                }
                if((live_count<2 || live_count>3 )&& board[i][j]==1){
                    board[i][j]=-1;
                }
                if(board[i][j]==0 && live_count==3 ){
                    board[i][j]=2;
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j]<=0){
                    board[i][j]=0;
                }
                else{
                    board[i][j]=1;
                }
            }
        }
    }
};
