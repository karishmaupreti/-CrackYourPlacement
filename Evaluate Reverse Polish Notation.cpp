class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if (isdigit(tokens[i][0]) || (tokens[i].size() > 1 && tokens[i][0] == '-' && isdigit(tokens[i][1]))) {
            st.push(stoi(tokens[i])); 
        }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int res;
                switch(tokens[i][0]){
                    case '+':
                    res=a+b;
                    break;
                    case '-':
                    res=b-a;
                    break;
                    case '*':
                    res=a*b;
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
