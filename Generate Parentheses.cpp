class Solution {
public:
   void solve(int n,int open,int close,vector<string>&ans,string curr){
    if(curr.size()==2*n){
        ans.push_back(curr);
        return ;
    }
    if(open<n){
        solve(n,open+1,close,ans,curr+"(");
    }
    if(close<open){
        solve(n,open,close+1,ans,curr+")");
    }
   }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;

        solve(n,0,0,ans,"");
        return ans;
    }
};
