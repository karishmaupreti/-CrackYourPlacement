class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       
        ListNode* temp3=new ListNode(-1);
        ListNode* ans=temp3;
        int carry=0;
        while(l1!=NULL &&  l2!=NULL){
            int num=l1->val+l2->val+carry;
            carry=num/10;
            temp3->next=new ListNode(num%10);
            temp3=temp3->next;
            l1=l1->next;
            l2=l2->next;
   

        }
        while(l1!=NULL){
            int num=l1->val + carry;
            carry=num/10;
            temp3->next=new ListNode(num%10);
            temp3=temp3->next;
            l1=l1->next;
        }
         while(l2!=NULL){
            int num=l2->val + carry;
            carry=num/10;
            temp3->next=new ListNode(num%10);
            temp3=temp3->next;
            l2=l2->next;
        }
        if(carry!=0){
            temp3->next=new ListNode(carry);
            
        }
        
        return ans->next;
    }
};
