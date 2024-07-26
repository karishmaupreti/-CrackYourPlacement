class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        if(root==NULL) return ans;

        if(root->left && root->left->left==NULL && root->left->right==NULL) ans+=root->left->val;

        ans+=sumOfLeftLeaves(root->left);
        ans+=sumOfLeftLeaves(root->right);

        return ans;

    }
};
