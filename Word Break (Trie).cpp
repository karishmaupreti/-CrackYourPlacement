class Solution {
public:
    // A : given string to search
    // B : vector of available strings
    
    int wordBreak(string A, vector<string> &B) {
        //code here
        int n = A.size();
        unordered_set<string> dict(B.begin(), B.end());
        vector<bool> dp(n + 1, false);
        dp[0] = true; 
        
        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (dp[j] && dict.find(A.substr(j, i - j)) != dict.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        
        return dp[n] ? 1 : 0; 
    }
};
