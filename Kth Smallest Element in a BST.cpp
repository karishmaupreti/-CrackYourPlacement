class Solution {
public:
     void solve(TreeNode*root,vector<int>&ans){
        if(root==NULL) return ;
         
         solve(root->left,ans);
         ans.push_back(root->val);
         solve(root->right,ans);
        
        
    }
    int kthSmallest(TreeNode* root, int k) {
          // add code here.
        vector<int>ans;
        int count=0;
        solve(root,ans);
        
        if(k>ans.size()) return -1;
        return ans[k-1];
    }
};
