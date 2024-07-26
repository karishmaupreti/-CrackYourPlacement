class Solution {
public:
    void RView(TreeNode* root,int level,vector<int>&ans){
        if(root==NULL) return;

        if(ans.size()==level) ans.push_back(root->val);
        if(root->right) RView(root->right,level+1,ans);
        if(root->left) RView(root->left,level+1,ans);

    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL) return ans;

        RView(root,0,ans);
        return ans;
    }
};
