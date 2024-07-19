class Solution {
public:
    string decodeString(string s) {
        stack<int>count;
        stack<string>str;
        string currString="";
        int k=0;

        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                k=k*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                count.push(k);
                str.push(currString);
                k=0;
                currString="";
            }
            else if(s[i]==']'){
                string s=str.top();
                str.pop();
                int occ=count.top();
                count.pop();
                string desiredStr="";
                for(int i=0;i<occ;i++){
                    desiredStr+=currString;
                }
                currString=s+desiredStr;
            }
            else{
                currString+=s[i];
            }
        }
        return currString;
    }
};
