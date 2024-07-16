class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            price=min(price,prices[i]);
            ans=max(ans,prices[i]-price);
        }
        return ans;
    }
};
