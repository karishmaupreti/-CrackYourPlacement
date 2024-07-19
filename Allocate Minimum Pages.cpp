class Solution {
 public:
    // Function to find minimum number of pages.
    bool isPossible(int arr[],int n,int m,int mid){
        int pageCount=0;
        int studentCount=1;
        
        for(int i=0;i<n;i++){
            if(arr[i]+pageCount<=mid){
                pageCount+=arr[i];
                
            }
            else{
                studentCount++;
                pageCount=arr[i];
                if(studentCount>m || arr[i]>mid) return false;
            }
        }
        return true;
    }
    long long findPages(int n, int arr[], int m) {
        // code here
        if(m>n) return -1;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int s=0,e=sum;
        long long ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            
            if(isPossible(arr,n,m,mid)){
                ans=mid;
                e=mid-1;
                }
                else{
                    s=mid+1;
                }
        }
        return ans;
    }
};
