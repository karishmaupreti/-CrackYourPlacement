class Solution {
public:
    int maximumProduct(vector<int>& nums) {

        if(nums.size()==3){
            return nums[0]*nums[1]*nums[2];
        }
       int ans=INT_MIN;
       int n=nums.size();
       sort(nums.begin(),nums.end());
       for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int k=n-1;

         int prod=nums[i]*nums[j]*nums[k];
         ans=max(ans,prod);

        }
       }
       return ans;
    }
};
