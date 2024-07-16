class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
            while(columnNumber!=0){
                columnNumber--;
                char c='A'+(columnNumber%26);
               s=c+s;
               columnNumber/=26;
            }
        
        return s;
    }
};
