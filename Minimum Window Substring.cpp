class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(m>n) return "";

       map<char,int>mp;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }

        int i=0,j=0,start=0;
        int ans=INT_MAX;
        int req=t.size();
        while(j<n){
            if(mp[s[i]]>0){
                req--;
            }
            mp[s[i]]--;

            while(req==0){
                if(ans>j-i+1){
                    ans=j-i+1;
                    start=i;
                }
                mp[s[i]]++;
                if(mp[s[i]]>0)
                    req++;
                i++;
            }
            j++;
        }
        return ans==INT_MAX ? "" : s.substr(start,ans);


    }
};
