int getMax(int arr[],int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        ans=max(ans,arr[i]);
    }
    return ans;
}
void countSort(int arr[],int pass,int n){
    
    vector<int>v(10,0);
    for(int i=0;i<n;i++){
        int ele=(arr[i]/pass)%10;
        v[ele]++;
    }
    for(int i=1;i<10;i++){
        v[i]=v[i]+v[i-1];
    }
    vector<int>ans(n,0);
    for(int i=n-1;i>=0;i--){
       int ele=arr[i];
       v[(arr[i]/pass)%10]--;
       ans[v[(arr[i]/pass)%10]]=ele;
    }
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
}
void radixSort(int arr[], int n) 
{ 
   // code here
   
   int maxi=getMax(arr,n);
   
   for(int i=1;maxi/i>0;i=i*10){
       countSort(arr,i,n);
   }
}
