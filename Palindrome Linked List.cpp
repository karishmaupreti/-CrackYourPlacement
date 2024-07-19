class Solution {
public:
    ListNode* reverse(ListNode* slow){
        ListNode* curr=slow;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=reverse(slow);
        ListNode* start=head;
       while(mid!=NULL){
        if(start->val!=mid->val) return false;
        start=start->next;
        mid=mid->next;
       }
            return true;
    } 
};
