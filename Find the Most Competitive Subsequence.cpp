class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        stack<int>st;
        vector<int>ans(k);
        for(int i=0;i<nums.size();i++){

           while(!st.empty() && nums[i]<nums[st.top()]&& st.size()+nums.size()-i>k){
            st.pop();
           }
            if(st.size()<k){
                st.push(i);
            }
        }
        int i=k-1;
        while(!st.empty()){
          ans[i]=nums[st.top()];

          st.pop();
          i--;
        }
        return ans;
    }
};
