class Solution {
public:
    string addBinary(string a, string b) {
        
 
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        
        string ans="";
        while(i>=0 || j>=0 || carry!=0){

            int x=0;
            if(i>=0 && a[i]=='1'){
                x=1;
            }
            int y=0;
            if(j>=0 && b[j]=='1'){
                y=1;
            }
            int sum=0;
          
           
            sum=carry+x+y;
            carry=sum/2;
            ans+=(sum%2==0) ? '0' :'1';
            
            i--;
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
