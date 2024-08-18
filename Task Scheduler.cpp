class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>v(26,0);
        int freq=0;
        for(int i=0;i<tasks.size();i++){
            v[tasks[i]-'A']++;
            freq=max(freq,v[tasks[i]-'A']);
        }

        int ans=(freq-1)*(n+1);
        for(int i=0;i<26;i++){
            if(v[i]==freq)ans++;
        }
        return ans> tasks.size() ? ans :tasks.size();
    }
};
