class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>st;
       
        int n=temperatures.size();
         vector<int>ans(n);
        for(int i=n-1;i>=0 ;i--){
            while(!st.empty() && temperatures[i]>=st.top().first){
                st.pop();
            }
            if(st.empty() ){
                ans[i]=0;
                st.push({temperatures[i],i});

            }
            else{
              ans[i]=st.top().second -i;
           
                st.push({temperatures[i],i});
         
        }
        }
        return ans;
    }
};
