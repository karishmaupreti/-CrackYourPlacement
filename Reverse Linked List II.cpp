class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=new ListNode(-1);
        temp->next=head;
        ListNode* prev=temp;

        for(int i=1;i<left;i++){
            prev=prev->next;
        }

        ListNode* curr=prev->next;

        for(int i=0;i<right-left;i++){
            ListNode* temp=curr->next;
            curr->next=temp->next;
            temp->next=prev->next;
            prev->next=temp;
            
        }
           return temp->next;
    }
};
