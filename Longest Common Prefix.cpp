class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string ans="";
        string str1=strs[0];
        string str2=strs[n-1];
        int n1=str1.size(),n2=str2.size();
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(str1[i]==str2[j]){
                ans+=str1[i];
                i++;j++;
            }
            else{
                break;
            }
        }
        return ans;
    }
};
