class Solution {
public:
    string minWindow(string s, string t) {
         int n=s.size();
        if(t.size()>n) return "";
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }
        
        int totalLen=t.size();
        int ans=INT_MAX;
        int start_i=0;
        
        int i=0,j=0;
        while(j<n){
            char ch=s[j];
            if(mp[ch]>0){
                totalLen--;
                
            }
            mp[ch]--;
            
            while(totalLen==0){
                int currLen=j-i+1;
                if(ans>currLen){
                    ans=currLen;
                    start_i=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0){
                    totalLen++;
                }
                i++;
            }
            j++;
        }
        return (ans==INT_MAX ? "" : s.substr(start_i,ans));
    }
};
