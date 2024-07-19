class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(!st.empty() && s[i]=='#'){
                st.pop();
            }
            else if(s[i]!='#'){
            st.push(s[i]);
        }
        }
        string str1="";
        while(!st.empty()){
            char c=st.top();
            st.pop();
            str1+=c;
        }
        stack<char>st2;
         for(int i=0;i<t.size();i++){
            if(!st2.empty() && t[i]=='#'){
                st2.pop();
            }
             else if(t[i]!='#'){
            st2.push(t[i]);
        }
        }
        string str2="";
        while(!st2.empty()){
            char c=st2.top();
            st2.pop();
           str2+=c;
        }
        return str1==str2;

    }
};
