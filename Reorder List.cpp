class Solution {
public:
ListNode* reverse(ListNode* half){
    ListNode*prev=NULL;
    ListNode*curr=half;
    ListNode* next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return;
        ListNode* slow=head;
        ListNode*fast=head;
        while(fast!=NULL && fast->next!=NULL){
              slow=slow->next;
              fast=fast->next->next;
        }
        ListNode* half=slow->next;
        slow->next=NULL;
        half=reverse(half);
        ListNode* start=head;
        while(half!=NULL){
            ListNode* temp1=start->next;
            ListNode* temp2=half->next;
            start->next=half;
            half->next=temp1;
            start=temp1;
            half=temp2;
        }

       
    }
};
