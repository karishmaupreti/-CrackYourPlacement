class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        for(auto it:mp){
            p.push({it.second,it.first});

            if(p.size()>k){
                p.pop();
            }
        }
        vector<int>ans;
       while(!p.empty()){
        ans.push_back(p.top().second);
            p.pop();
       }
       return ans;
    }
};
