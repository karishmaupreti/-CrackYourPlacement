class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL ) return NULL;
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        

        int count=0;
        ListNode* temp=head;
        while(temp!=NULL && count<k){
            count++;
            temp=temp->next;
        }
        if(count<k) return head;
        count=0;
        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(next!=NULL){
           head->next= reverseKGroup(next,k);
        }
        return prev;
    }
};
