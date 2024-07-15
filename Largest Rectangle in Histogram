class Solution {
public:
   void nextSmaller(vector<int>&heights,vector<int>&next,int n){
    stack<int>st1;
    for(int i=n-1;i>=0;i--){
        while(!st1.empty() && heights[st1.top()]>=heights[i]){
            st1.pop();
        }
        if(st1.empty()){
            next[i]=-1;

        }
        else{
         next[i]=st1.top();
        }
        st1.push(i);
    }
    
   }
   void prevSmaller(vector<int>&heights,vector<int>&prev,int n){
    stack<int>st2;
    for(int i=0;i<n;i++){
        while(!st2.empty() && heights[st2.top()]>=heights[i]){
            st2.pop();
        }
        if(st2.empty()){
            prev[i]=-1;

        }
        else{
         prev[i]=st2.top();
        }
         st2.push(i);
    }
   
   }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>next(n);
        nextSmaller(heights,next,n);
        vector<int>prev(n);
        prevSmaller(heights,prev,n);

        int ans=INT_MIN;
        for(int i=0;i<n ;i++){
            int len=heights[i];
            if(next[i]==-1){
                next[i]=n;
            }
            int temp=len*(next[i]-prev[i]-1);
            ans=max(ans,temp);
        }
        return ans;

    }
};
