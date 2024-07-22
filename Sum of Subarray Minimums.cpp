class Solution {
public:
const int MOD = 1e9 + 7;
    void prevSmaller(vector<int>&arr,vector<int>&prev){
        stack<int>st;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                prev[i]=-1;
                st.push(i);
            }
            else{
                prev[i]=st.top();
                st.push(i);    
            }

        }
    }
    void nextSmaller(vector<int>&arr,vector<int>&next){
        stack<int>st2;
        for(int i=arr.size()-1;i>=0;i--){
            while(!st2.empty() && arr[st2.top()]>=arr[i]){
                st2.pop();
            }
            if(st2.empty()){
                next[i]=arr.size();
                st2.push(i);
            }
            else{
                next[i]=st2.top();
                st2.push(i);    
            }

        }
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>prev(n);
        prevSmaller(arr,prev);
        vector<int>next(n);
        nextSmaller(arr,next);
       
       int ans=0;
        for (int i = 0; i < n; i++) {
        long long leftCount = i - prev[i];
        long long rightCount = next[i] - i;
        ans = (ans + arr[i] * leftCount % MOD * rightCount % MOD) % MOD;
    }
    return ans;
    }
};
