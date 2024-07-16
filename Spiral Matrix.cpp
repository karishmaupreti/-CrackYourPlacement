class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int n=matrix.size();
        int m=matrix[0].size();
        int topLeftRow=0;
        int bottomLeftRow=n-1;
        int topLeftCol=0;
        int topRightCol=m-1;
        
        while (topLeftRow <= bottomLeftRow && topLeftCol <= topRightCol){
        for(int j=topLeftCol;j<=topRightCol;j++){
            ans.push_back(matrix[topLeftRow][j]);
        }
        topLeftRow++;
        for(int i=topLeftRow;i<=bottomLeftRow;i++){
            ans.push_back(matrix[i][topRightCol]);
        }
        topRightCol--;
        if (topLeftRow <= bottomLeftRow) {
        for(int j=topRightCol;j>=topLeftCol;j--){
            ans.push_back(matrix[bottomLeftRow][j]);
        }
        bottomLeftRow--;
        }
        
        if (topLeftCol <= topRightCol) {
        for(int i=bottomLeftRow;i>=topLeftRow;i--){
            ans.push_back(matrix[i][topLeftCol]);
        }
        topLeftCol++;
        }
        }
        return ans;
    }
};
