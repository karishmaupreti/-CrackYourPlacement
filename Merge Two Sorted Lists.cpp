class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1=list1;
        ListNode* head2=list2;
        ListNode*ansHead=new ListNode(-1);
        ListNode* ansTail=ansHead;
        while(head1!=NULL && head2!=NULL){
            if(head1->val <= head2->val){
                 ListNode* temp=new ListNode(head1->val);
                 ansTail->next=temp;
                 ansTail=temp;
                 head1=head1->next;

            }
            else{
                ListNode* temp=new ListNode(head2->val);
                ansTail->next=temp;
                ansTail=temp;
                head2=head2->next;
            }
        }
        while(head1!=NULL){
             ListNode* temp=new ListNode(head1->val);
                 ansTail->next=temp;
                 ansTail=temp;
                 head1=head1->next;
        }
        while(head2!=NULL){
             ListNode* temp=new ListNode(head2->val);
                ansTail->next=temp;
                ansTail=temp;
                head2=head2->next;
        }
        return ansHead->next;
    }
};
