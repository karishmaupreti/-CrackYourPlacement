class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
         int n = cardPoints.size();
    vector<int> prefixSum(n + 1, 0);
    vector<int> postfixSum(n + 1, 0);
    
  
    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + cardPoints[i];
    }
    
    for (int i = n - 1; i >= 0; --i) {
        postfixSum[i] = postfixSum[i + 1] + cardPoints[i];
    }
    
    int maxScore = 0;
    
    for (int i = 0; i <= k; ++i) {
        int currentScore = prefixSum[i] + postfixSum[n - (k - i)];
        maxScore = max(maxScore, currentScore);
    }
    
    return maxScore;
    }
};
