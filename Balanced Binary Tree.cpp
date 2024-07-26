class Solution {
public:
    int height(TreeNode* root){
        int ans=0;
        if(root==NULL) return 0;
        ans=ans+(1+max(height(root->left),height(root->right)));
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        int left=0;
        int right=0;
        if(root==NULL) return true;
        left+=height(root->left);
        right+=height(root->right);
       
        if(abs(left-right)>1) return false;
        bool l=isBalanced(root->left);
        bool r=isBalanced(root->right);
        return l&& r;
        return true;
    }
};
