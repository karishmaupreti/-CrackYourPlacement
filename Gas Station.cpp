class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0,sum2=0;
        for(int i=0;i<gas.size();i++){
            sum1+=gas[i];
            sum2+=cost[i];
        }
        if(sum1<sum2) return -1;
        int start=0;
        int curr_gas=0;
        for(int i=0;i<gas.size();i++){
            if((curr_gas+gas[i])-cost[i]>=0){
               
                curr_gas= curr_gas+ gas[i]-cost[i];
                

            }
            else{
                curr_gas=0;
                start=i+1;
            }
        }
        return  start;
    }
};
