class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return NULL;
        if(head->next==NULL){
            if(head->val==val) return NULL;
            else return head;
        } 
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val==val){

                prev->next=temp->next;
                ListNode* curr=temp;
                 temp=prev->next;
                delete(curr);
            }
            else{
                prev=temp;
                temp=temp->next;
            }
            
        }

       return dummy->next;
    }
};
