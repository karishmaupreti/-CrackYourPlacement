class Solution {
public:
    bool solve(TreeNode*root,int targetSum,int currSum){
        
        if(root==NULL) return false;

        currSum+=root->val;
       
        if(root->left==NULL && root->right==NULL) {
            return currSum==targetSum;
        }
         bool leftFlag=false;
        bool rightFlag=false;
        
            if(root->left) {
               leftFlag=solve(root->left,targetSum,currSum);
            }
            if(root->right){
                rightFlag=solve(root->right,targetSum,currSum);
            }
        
       

        return leftFlag || rightFlag;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        return solve(root,targetSum,0);

    }
};
