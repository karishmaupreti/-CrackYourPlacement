class Solution {
public:
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int n=nums.size();
        vector<int> dp(n, 0);
        vector<int> wordIndex(n, 0);

   
    for (int i = n - 1; i >= 0; --i) {
        int lineLength = 0;
        dp[i] = INT_MAX;

        for (int j = i; j < n; ++j) {
            lineLength += nums[j];
            if (lineLength > k) break;

           
            int extraSpaces = k - lineLength;
            int cost;
            if (j == n - 1) {
               
                cost = 0;
            } else {
                cost = extraSpaces * extraSpaces + dp[j + 1];
            }

           
            if (cost < dp[i]) {
                dp[i] = cost;
                wordIndex[i] = j;
            }

            
            lineLength += 1;
        }
    }
      return dp[0];
        
    } 
};
