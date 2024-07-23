class Solution {
public:
       ListNode* merge(ListNode* left,ListNode* right){
        ListNode* ansHead=new ListNode(0);
        ListNode* ansTail=ansHead;
      
        while(left!=NULL && right!=NULL){
            if(left->val<=right->val){
                
                ansTail->next=left;
                ansTail=left;
                left=left->next;
            }
            else{
                
                ansTail->next=right;
                ansTail=right;
                right=right->next;
            }
        }
        while(left!=NULL){
             ansTail->next=left;
                ansTail=left;
                left=left->next;
        }
        while(right!=NULL){
            ansTail->next=right;
                ansTail=right;
                right=right->next;
        }
        ListNode* ans=ansHead->next;
        delete(ansHead);
        return ans;
       }
       

    ListNode* sortList(ListNode* head) {
         if (head == NULL || head->next == NULL) {
               return head; 
        }
       ListNode*slow=head;
        ListNode*fast=head->next;
        while(fast!=NULL&&fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        
        ListNode* right=slow->next;
        slow->next=NULL;
        ListNode*left=head;

        left=sortList(left);
        right=sortList(right);
        return merge(left,right);
    }
};
