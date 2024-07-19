class Solution {
public:
   ListNode* reverse(ListNode* ans){
    ListNode*curr=ans;
    ListNode*prev=NULL;
    ListNode* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
   }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        ListNode * temp1=new ListNode(-1);
        
        int carry=0;
        ListNode* ans=temp1;
        while(l1!=NULL && l2!=NULL){
            int num=l1->val+l2->val+carry;
            carry=num/10;
            ListNode* temp=new ListNode(num%10);
            temp1->next=temp;
            temp1=temp;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            int num=l1->val+carry;
            carry=num/10;
            ListNode* temp=new ListNode(num%10);
            temp1->next=temp;
            temp1=temp;
            l1=l1->next;
           
        }
        while(l2!=NULL){
            int num=l2->val+carry;
            carry=num/10;
            ListNode* temp=new ListNode(num%10);
            temp1->next=temp;
            temp1=temp;
            l2=l2->next;
           
        }
        if(carry){
            temp1->next=new ListNode(carry);
        }
        ListNode* ans1=reverse(ans->next);
        return ans1;
    }
};
