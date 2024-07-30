class Solution {
public:
    void solve(TreeNode* root,vector<string>&ans,string currStr){
        currStr+=to_string(root->val);

        if(root->left==NULL && root->right==NULL){
             ans.push_back(currStr);
             currStr="";
        }
        else{
            if(root->left){
                solve(root->left,ans,currStr+"->");
            }
            if(root->right){
                solve(root->right,ans,currStr+"->");
            }
        }

    }
    vector<string> binaryTreePaths(TreeNode* root) {
       vector<string>ans;
       
       if(root==NULL) return ans;
       solve(root,ans,"");
       return ans; 
    }
};
