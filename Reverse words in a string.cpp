class Solution {
public:
    string reverseWords(string s) {
        stack<string>st;
        string ans="",s1="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && s1=="") continue;
            else if(s[i]==' ' && s1 !=""){
                st.push(s1);
                s1="";
            }
            else{
                s1+=s[i];
            }
        }
        if(s1!="") st.push(s1);
        while(!st.empty()){
            string s=st.top();
            st.pop();
            ans+=s;
            if(!st.empty()){
                ans+=" ";
            }
        }
        return ans;
    }
};
