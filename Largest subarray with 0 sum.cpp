class Solution {
public:
    int maxLen(vector<int>& arr, int n) {
        // Your code here
        unordered_map<int,int>mp;
        int maxLen=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(sum==0){
                maxLen=i+1;
            }
            if(mp.find(sum)!=mp.end()){
                maxLen=max(maxLen,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return maxLen;
    }
};
