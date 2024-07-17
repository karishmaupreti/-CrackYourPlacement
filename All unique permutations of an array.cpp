class Solution {
 public:
   void solve(vector<int>&arr,vector<int>curr,vector<int>&vis,vector<vector<int>>&ans){
       if(curr.size()==arr.size()){
           ans.push_back(curr);
           return ;
       }
       
       
       for(int i=0;i<arr.size();i++){
           if(vis[i]) continue;
           if(i>0 && arr[i-1]==arr[i] && vis[i-1]==1) continue;
           
           
           vis[i]=1;
           curr.push_back(arr[i]);
           
           solve(arr,curr,vis,ans);
           
           curr.pop_back();
           vis[i]=0;
           
       }
   }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        vector<int>curr;
        vector<vector<int>>ans;
        vector<int>vis(n,0);
        
        sort(arr.begin(),arr.end());
        
        solve(arr,curr,vis,ans);
        return ans;
    }
};
