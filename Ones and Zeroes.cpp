class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        int numStrings = strs.size();
    vector<vector<vector<int>>> dp(numStrings + 1, vector<vector<int>>(m + 1, vector<int>(n + 1, 0)));
    
    for (int i = 0; i < numStrings; ++i) {
        int zeroCount = 0;
        int oneCount = 0;
        
     
        for (char ch : strs[i]) {
            if (ch == '0') {
                zeroCount++;
            } else {
                oneCount++;
            }
        }
        
        
        for (int j = m; j >= zeroCount; --j) {
            for (int k = n; k >= oneCount; --k) {
                dp[i + 1][j][k] = max(dp[i + 1][j][k], dp[i][j - zeroCount][k - oneCount] + 1);
            }
        }
        
       
        for (int j = 0; j <= m; ++j) {
            for (int k = 0; k <= n; ++k) {
                dp[i + 1][j][k] = max(dp[i + 1][j][k], dp[i][j][k]);
            }
        }
    }
    
    return dp[numStrings][m][n];
    }
};
