class Solution {
public:
    bool isSame(TreeNode* root,TreeNode* subRoot){
        if(root==NULL && subRoot==NULL) return true;
        if(root==NULL || subRoot==NULL) return false;

        return (root->val==subRoot->val) && isSame(root->left,subRoot->left ) && isSame(root->right,subRoot->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(root==NULL) return false;

       if(isSame(root,subRoot)) return true;

       return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
