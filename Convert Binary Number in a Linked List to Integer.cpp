class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string str="";
        ListNode*temp=head;
        while(temp!=NULL){
            str+=temp->val;
            temp=temp->next;
        }
        int ans=0;
        int exp=0;
        for(int i=str.size()-1;i>=0;i--){
             ans=ans+int(str[i])*pow(2,exp);
             exp++;
        }
        return ans;
        
    }
};
