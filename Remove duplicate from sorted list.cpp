class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* prev=head;
        ListNode* nextNode=prev->next;
        while(nextNode !=NULL){
               if(prev->val == nextNode->val){
                ListNode* temp=nextNode;
                prev->next=nextNode->next;
                
                nextNode=prev->next;
                delete(temp);
               }
               else{
                prev=prev->next;
                nextNode=nextNode->next;
               }
        }
        return head;
    }
};
