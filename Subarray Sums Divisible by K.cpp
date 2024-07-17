class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int prefixSum=0;
        vector<int>arr(k,0);
        arr[0]=1;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int rem=prefixSum % k;
            if(rem<0){
                rem+=k;
            }
             if(arr[rem]>0){
                    count+=arr[rem];
            }
            arr[rem]++;
        }
        return count;
    }
};
