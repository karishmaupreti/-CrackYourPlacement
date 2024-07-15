class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int count=1;
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int i=0,j=i+1;
        while(j<nums.size()){
            if(nums[i]==nums[j]){
                ans.push_back(nums[i]);
                i+=2;
                j=i+1;
                count=0;
            }
            else{
                i++;
                j=i+1;
            }
            

        }
        return ans;
    }
};
