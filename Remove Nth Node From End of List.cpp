class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        int pos=count-n;
        if (pos == 0) {
        ListNode* newHead = head->next;
        delete head;
        return newHead;
       }
        ListNode* curr=head;
       
         for(int i=1;i<pos;i++){
            curr=curr->next;
         }
           ListNode* delNode=curr->next;
           curr->next=delNode->next;
           delete(delNode);
           return head;

    }
};
