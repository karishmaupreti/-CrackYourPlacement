class Solution {
public:
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<vector<int>>adj(K);
        vector<int>indeg(K,0);
        for(int i=0;i<N-1;i++){
            string s1=dict[i];
            string s2=dict[i+1];
            int x=0,y=0;
            while(x<s1.size() && y<s2.size()){
                char c1=s1[x],c2=s2[y];
                if(c1==c2){
                    x++;y++;
                }
                else{
                    adj[c1-'a'].push_back(c2-'a');
                    indeg[c2-'a']++;
                    break;
                }
            }
        }
        queue<int>q;
        for(int i=0;i<K;i++){
            if(indeg[i]==0){
                q.push(i);
            }
        }
        string ans="";
        while(!q.empty()){
            int ele=q.front();
            q.pop();
            char c=ele+'a';
            ans+=c;
            for(int i=0;i<adj[ele].size();i++){
                indeg[adj[ele][i]]--;
                if(indeg[adj[ele][i]]==0){
                    q.push(adj[ele][i]);
                }
            }
        }
        return ans;
    }
};
