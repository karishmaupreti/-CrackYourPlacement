class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;

        for(int i=0;i<s.size();i++){
            if(!st.empty() && st.top().first==s[i]){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
                
            }
            else{
                st.push({s[i],1});
            }
        }
        string ans="";
        while(!st.empty()){
            char c=st.top().first;
            int count=st.top().second;
            for(int i=0;i<count;i++){
                ans+=c;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
