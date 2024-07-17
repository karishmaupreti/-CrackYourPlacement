class Solution {
  public:
    //Function to find if there is a celebrity in the party or not.
    bool knows(vector<vector<int>>&M,int a,int b,int n){
        
                if(M[a][b]==1){
                    return true;
                }
                else return false;
        
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int>st;
        for(int i=0;i<n;i++){
            st.push(i);
        }
        while(st.size()>1){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            if(knows(M,a,b,n)){
                st.push(b);
            }
            else{
                st.push(a);
            }
        }
        int ans=st.top();
        int zeroCount=0;
        for(int i=0;i<n;i++){
            if(M[ans][i]==0){
                zeroCount++;
            }
        }
        if(zeroCount!=n) return -1;
        
        
        int oneCount=0;
        for(int i=0;i<n;i++){
            if(M[i][ans]==1){
                oneCount++;
            }
        }
        if(oneCount==n-1) return ans;
        else return -1;
    }
};
