class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         map<int,int>m;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==k){
                count++;
            }
        int rem=sum-k;
        if(m.find(rem)!=m.end()){
            count+=m[rem];
        }
        m[sum]++;
        }
        return count;
    }
};
