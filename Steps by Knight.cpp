class Solution {
public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    // Code here
	    KnightPos[0]--;
	    KnightPos[1]--;
	    TargetPos[0]--;
	    TargetPos[1]--;
	    
	    if(KnightPos[0]==TargetPos[0] && KnightPos[1]==TargetPos[1]) return 0;
	    
	    
	    vector<vector<int>>vis(N,vector<int>(N,0));
	    queue<pair<int,pair<int,int>>>q;
	    q.push({KnightPos[0],{KnightPos[1],0}});
	    vis[KnightPos[0]][KnightPos[1]]=1;
	    int step=0;
	    while(!q.empty()){
	        int r=q.front().first;
	        int c=q.front().second.first;
	        int step=q.front().second.second;
	        q.pop();
	        
	        
	    int row[8]={-1,+1,-2,-2,+2,+2,-1,+1};
	    int col[8]={-2,-2,-1,+1,-1,+1,+2,+2};
	        for(int i=0;i<8;i++){
	            int nrow=r+row[i];
	            int ncol=c+col[i];
	            
	            if(nrow==TargetPos[0] && ncol==TargetPos[1]) return step+1;
	            
	            if(nrow>=0 && nrow<N && ncol>=0 && ncol<N && vis[nrow][ncol]==0 ){
	                vis[nrow][ncol]=1;
	                q.push({nrow,{ncol,step+1}});
	            }
	        }
	        
	    }
	    return -1;
	   
	    
	    
	}
};
