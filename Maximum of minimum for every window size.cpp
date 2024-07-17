class Solution {
 public:
    //Function to find maximum of minimums of every window size.
    void prevSmaller(int arr[],vector<int>&prev,int n){
        
        
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
                
            }
            if(st.empty()){
                prev[i]=-1;
            }
            else{
                prev[i]=st.top();
               
            }
            st.push(i);
        }
    }
    
     void nextSmaller(int arr[],vector<int>&next,int n){
        
        
        stack<int>st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
                
            }
            if(st.empty()){
                next[i]=n;
            }
            else{
                next[i]=st.top();
               
            }
            st.push(i);
        }
    
     }
    vector <int> maxOfMin(int arr[], int n)
    {
        // Your code here
        vector<int>ans(n,0);
        vector<int>prev(n);
        prevSmaller(arr,prev,n);
        vector<int>next(n);
        nextSmaller(arr,next,n);
        
        
        for(int i=0;i<n;i++){
            int ind=next[i]-prev[i]-1;
            ans[ind-1]=max(ans[ind-1],arr[i]);
        }
        
        for(int i=n-2;i>=0;i--){
            ans[i]=max(ans[i],ans[i+1]);
        }
        return ans;
    }
};
