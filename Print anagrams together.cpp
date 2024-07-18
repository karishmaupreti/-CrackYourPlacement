class Solution {
public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        int n=string_list.size();
        for(int i=0;i<n;i++){
            string s=string_list[i];
            sort(s.begin(),s.end());
            mp[s].push_back(string_list[i]);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
