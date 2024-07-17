class Solution {
public:
    int calculate(string s) {
        int num=0;
        char c = '+';
          stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                num=(num*10)+(s[i]-'0');
            }
            if(!isdigit(s[i]) && !isspace(s[i]) || i==n-1){

                if(c =='+'){
                    st.push(num);
                }
                else if(c =='-'){
                    st.push(-num);
                }
                else if(c =='*'){
                    if(!st.empty()){
                    int a=st.top();
                    st.pop();
                    st.push(a*num);
                }
                }
                else if(c =='/'){
                    if(!st.empty()){
                    int a=st.top();
                    st.pop();
                    st.push(a/num);
                }
                }
                c =s[i];
                num=0;
            }
        }
        int ans=0;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};
