class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double,int>>v;
        for(int i=0;i<quality.size();i++){
            double ratio=(double)wage[i]/quality[i];
            v.push_back({ratio,quality[i]});
        }
        sort(v.begin(),v.end());

        double ans=DBL_MAX;
        int totalQuality=0;
        priority_queue<int>p;
        for(int i=0;i<quality.size();i++){
            int currQuality=v[i].second;
            double currRatio=v[i].first;
            totalQuality+=currQuality;
            p.push(currQuality);
           
            if(p.size()>k){
                totalQuality-=p.top();
                p.pop();
            }
            if(p.size()==k){
                double cost=totalQuality*currRatio;
                ans=min(ans,cost);
            }
           
        }
return ans;
    }
};
