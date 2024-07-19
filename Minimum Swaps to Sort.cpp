class Solution {
  public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int count=0;
	    vector<pair<int,int>>v;
	    for(int i=0;i<nums.size();i++){
	        v.push_back({nums[i],i});
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<nums.size();i++){
	        if(v[i].second==i) continue;
	        else {
	            swap(v[i],v[v[i].second]);
	            count++;
	            i--;
	        }
	    }
	    return count;
	}
};
