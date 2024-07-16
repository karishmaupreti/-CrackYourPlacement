class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return nums[0];
        int count=1;
        int n=nums.size();
        int occ=n/2;
        int i=0,j=i+1;
        while(j<n){
            if(nums[i]==nums[i+1]){
                count++;
               
                if(count>occ) return nums[i];
            }
            else{
                count=1;
                
            }
            i++;
            j++;
        }
        return -1;
    }
};
