class Solution {
public:
    int getCount(Node *root, int l, int h)
    {
      // your code goes here  
      int ans=0;
      if(root==NULL) return ans;
      
      if(root->data>=l && root->data<=h) ans++;
      if(root->left) ans+=getCount(root->left,l,h);
      if(root->right) ans+=getCount(root->right,l,h);
      return ans;
    }
};
