class Solution {
public:
   void nextGreater(vector<int>&nums2,vector<int>&next,int m){

        stack<int>st;
        for(int i=m-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                 st.pop();
            }
            if(st.empty()){
                next[i]=-1;
            }
            else{
                next[i]=st.top();
                
            }
            st.push(nums2[i]);

        }
   }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        vector<int>next(m);
        nextGreater(nums2,next,m);

        unordered_map<int,int>mp;
        for(int i=0;i<m;i++){
            mp[nums2[i]]=next[i];
        }
        for(int i=0;i<n;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;

    }
};
