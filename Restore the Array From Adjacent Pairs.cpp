class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        unordered_map<int,vector<int>>v;
        for(int i=0;i<adjacentPairs.size();i++){
            v[adjacentPairs[i][0]].push_back(adjacentPairs[i][1]);
            v[adjacentPairs[i][1]].push_back(adjacentPairs[i][0]);
        }

        int start=0;
        for(auto it:v){
           if(it.second.size()==1){
            start=it.first;
            break;
           }
        }
        int n=adjacentPairs.size()+1;
        vector<int>ans(n);
        ans[0]=start;
        ans[1]=v[start][0];

        for(int i=2;i<n;i++){
            int prev=ans[i-1];
            for(int j=0;j<v[prev].size();j++){
                if(v[prev][j]!=ans[i-2]){
                    ans[i]=v[prev][j];
                    break;
                }
            }
        }
        return ans;
    }
};
