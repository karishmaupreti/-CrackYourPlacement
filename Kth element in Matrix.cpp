class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        vector<pair<int,pair<int,int>>>v;
  for(int i=0;i<n;i++){
      v.push_back({matrix[i][0],{i,0}});
  }
  priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> p(v.begin(), v.end());

  int i,j;
  pair<int,pair<int,int>>ele;
  int ans;
  while(k--){
      ele=p.top();
      p.pop();
      i=ele.second.first;
      j=ele.second.second;
      ans=ele.first;
      
      if(j+1<n){
          p.push({matrix[i][j+1],{i,j+1}});
      }
  }
  return ans;
    }
};
