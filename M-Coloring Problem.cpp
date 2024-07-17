class Solution {
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    bool isPossible(bool graph[101][101],int i,int j,int n,vector<int>&color){
        for(int k=0;k<n;k++){
            if(graph[i][k]==1 && color[k]==j){
                return false;
            }
        }
        return true;
        
    }
    bool solve(bool graph[101][101],int n,int m,vector<int>&color,int count){
         if(count==n) return true;
        
        for(int j=0;j<m;j++){
            
                if(isPossible(graph,count,j,n,color)) {
                    color[count]=j;
                    if(solve(graph,n,m,color,count+1)) return true;
                    
                     color[count]=-1;
                }
            }
           
            
        
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        vector<int>color(n,-1);
        if(solve(graph,n,m,color,0)) return true;
        
        return false;
    }
};
