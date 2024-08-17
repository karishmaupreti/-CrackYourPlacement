class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>>p;
        for(auto it:mp){
            p.push({it.second,it.first});
        }
        string ans="";
        pair<int ,char>prev={-1,'#'};
        while(!p.empty()){
            pair<int,char>curr=p.top();
             p.pop();
             ans+=curr.second;
             curr.first--;

             if(prev.first>0){
                p.push(prev);
             }
            prev=curr;
        }
        return ans.size()==s.size()? ans : "";
    }
};
