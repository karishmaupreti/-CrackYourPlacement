class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MIN;
        int s=0,e=height.size()-1;
        while(s<e){
        int l=height[s];
        int r=height[e];
        int len=min(l,r);
        int breadth=e-s;
        ans=max(ans,len*breadth);
        if(l<=r){
            s++;
        }
        else{
            e--;
        }

        }
        return ans;
    }
};
