TreeNode* solve(vector<int>&nums,int s,int e ){
      if(s>e) return NULL;
      
      int mid=(s+e)/2;
      TreeNode* ans=new TreeNode(nums[mid]);
      ans->left=solve(nums,s,mid-1);
      ans->right=solve(nums,mid+1,e);
      
      return ans;
  }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(nums,0,nums.size()-1);
    }
};
