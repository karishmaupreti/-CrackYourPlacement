pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    int floor=-1,ceil=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return {arr[i],arr[i]};
        }
        else if(arr[i]<x){
            if(floor==-1 || floor<arr[i]){
                floor=arr[i];
            }
        }
        else{
            if(ceil==-1 || ceil>arr[i]){
                ceil=arr[i];
            }
        }
    }
    return {floor,ceil};
}
