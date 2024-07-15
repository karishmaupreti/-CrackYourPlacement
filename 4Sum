class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                   int k=j+1;
                   int w=n-1;
                   while(k<w){
                   long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[w];
                    if(sum==target) {
                        vector<int>temp={nums[i],nums[j],nums[k],nums[w]};
                        st.insert(temp);
                        k++;
                        w--;
                    }
                    else if(sum>target){
                        w--;
                    }
                    else{
                        k++;
                    }
                   }
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};
