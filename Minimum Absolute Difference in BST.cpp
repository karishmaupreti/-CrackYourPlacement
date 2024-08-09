class Solution {
public:
    void solve(TreeNode* root,vector<int>&ans){
        if(root==NULL) return;
        solve(root->left,ans);
        ans.push_back(root->val);
        solve(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        solve(root,ans);
        
        int temp=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            temp=min(temp,ans[i+1]-ans[i]);
        }
        return temp;
    }
};
