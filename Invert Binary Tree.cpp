class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;

         if(root->left){
            root->left=invertTree(root->left);
         }
         if(root->right){
            root->right=invertTree(root->right);
         }
         swap(root->left ,root->right);
         return root;
    }
};
