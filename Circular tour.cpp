class Solution {
public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
       //Your code here
       int start=0,bal=0,req=0;
       for(int i=0;i<n;i++){
           bal+=p[i].petrol-p[i].distance;
           if(bal<0){
               start=i+1;
               req+=bal;
               bal=0;
           }
       }
       if(bal+req>=0) return start;
       return -1;
    }
};
