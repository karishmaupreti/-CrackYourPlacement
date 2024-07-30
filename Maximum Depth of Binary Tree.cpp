class Solution {
public:
   int solve(TreeNode* root,int ans){
    if(root==NULL) return ans;
    int leftNode=solve(root->left,ans);
    int rightNode=solve(root->right,ans);
    return max(leftNode,rightNode)+1;
   }
    int maxDepth(TreeNode* root) {
      if(root==NULL) return 0;
      int ans=0;
      return solve(root,ans);
    }
};
