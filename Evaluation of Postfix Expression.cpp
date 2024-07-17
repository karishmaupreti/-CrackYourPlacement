class Solution:
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>st;
        for(int i=0;i<S.size();i++){
            if(S[i]>='0' && S[i]<='9'){
                st.push(S[i]-'0');
            }
            else{
                
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res;
                switch(S[i]){
                    case '+':
                    res=b+a;
                    break;
                    case '-':
                    res=b-a;
                    break;
                    case '*':
                    res=b*a;
                    break;
                    case '/':
                    res=b/a;
                    break;
                   
                    
                }
                st.push(res);
                
            }
        }
        return st.top();
    }
};
