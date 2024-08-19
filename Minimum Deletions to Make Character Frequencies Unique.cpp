class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        unordered_set<int>st;
        int ans=0;
        for(auto it:mp){
            while(it.second>0 && st.find(it.second)!=st.end()){
                it.second--;
                ans++;
            }
            if(it.second>0){
                st.insert(it.second);
            }
        }
return ans;
    }
};
