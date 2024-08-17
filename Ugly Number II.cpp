class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long ,vector<long long>,greater<long long>>p;
        unordered_set<long long>st;

        p.push(1);
        st.insert(1);
        long long currUgly=1;
        vector<int>factor={2,3,5};
        for(int i=0;i<n;i++){
            currUgly=p.top();
            p.pop();
            for(int i=0;i<3;i++){
                long long nextUgly=currUgly*factor[i];
                if(st.find(nextUgly)==st.end()){
                    st.insert(nextUgly);
                    p.push(nextUgly);
                }
            }
        }
        return currUgly;
    }
};
