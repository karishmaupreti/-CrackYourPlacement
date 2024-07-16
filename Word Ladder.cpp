class Solution {
public:
    int diff(string s1,string s2){
        int count=0;
          for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                count++;
            }
          }
          return count;
    }
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        int n=wordList.size();
        unordered_map<string, vector<string>> adj;

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(diff(wordList[i],wordList[j])==1){
                    adj[wordList[i]].push_back(wordList[j]);
                    adj[wordList[j]].push_back(wordList[i]);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(diff(wordList[i],beginWord)==1){
                adj[wordList[i]].push_back(beginWord);
                    adj[beginWord].push_back(wordList[i]);
            }
        }
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        set<string>st;
        st.insert(beginWord);
        int ans=0;
        while(!q.empty()){
            string s=q.front().first;
            int ans=q.front().second;
            q.pop();
            if(s==endWord) return ans;

            for(int i=0;i<adj[s].size();i++){
                if(st.find(adj[s][i])==st.end()){
                    st.insert(adj[s][i]);
                    q.push({adj[s][i],ans+1});
                }
            }

        }
        return 0;

    }
};
