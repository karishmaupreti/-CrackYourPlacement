class Solution{
  public:
    bool solve(Node* root,int lower,int upper){
        if(root==NULL) return 0;
        
        if(root->left==NULL && root->right==NULL){
            if(root->data-lower==1 && upper-root->data==1) return 1;
            else return 0;
            
        }
        return solve(root->left,lower,root->data) || solve(root->right,root->data,upper);
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
        int lower=0,upper=INT_MAX;
        return solve(root,lower,upper);
        
    }
};
