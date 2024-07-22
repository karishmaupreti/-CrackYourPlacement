class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
  
        // code here
        ListNode*evenHead=new ListNode(-1);
       ListNode*evenTail=evenHead;
        ListNode*oddHead=new ListNode(-1);
        ListNode*oddTail=oddHead;
        
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* newNode=new ListNode(temp->val);
            if(temp->val<x){
                evenTail->next=newNode;
                evenTail=newNode;
                
            }
            else{
                oddTail->next=newNode;
                oddTail=newNode;
            }
            temp=temp->next;
        }
        if(evenHead->next==NULL) return oddHead->next;
        if(oddHead->next==NULL) return evenHead->next;
        
       evenTail->next=oddHead->next;
       
        ListNode* ans=evenHead->next;
        delete(evenHead);
        delete(oddHead);
        return ans;
        
    
    }
};
