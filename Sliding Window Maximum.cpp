class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>p;
        for(int i=0;i<k;i++){
            p.push({nums[i],i});
        }
        vector<int>ans;
        ans.push_back(p.top().first);
        for(int i=k;i<nums.size();i++){
            p.push({nums[i],i});

            while(p.top().second<=i-k){
                p.pop();
            }
            ans.push_back(p.top().first);
        }
        return ans;
    }
};
