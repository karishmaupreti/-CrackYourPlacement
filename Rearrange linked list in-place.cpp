class Solution {
 public:
  Node* reverse(Node* mid){
      Node* prev=NULL;
      Node* curr=mid;
      Node* next=NULL;
      while(curr!=NULL){
          next=curr->next;
          curr->next=prev;
          prev=curr;
          curr=next;
      }
      return prev;
  }
    Node *inPlace(Node *root) {
        // Code here
        Node* slow=root;
        Node* fast=root;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* mid=slow->next;
        slow->next=NULL;
        mid=reverse(mid);
        Node* start=root;
        Node* end=mid;
        
        Node* ansHead=new Node(-1);
        Node* ansTail=ansHead;
        while(start!=NULL || end!=NULL){
            if(start!=NULL){
               Node* temp1=new Node(start->data);
               ansTail->next=temp1;
               ansTail=temp1;
               start=start->next;
            }
            if(end!=NULL){
                Node* temp2=new Node( end->data);
                 ansTail->next=temp2;
                 ansTail=temp2;
                 end=end->next;
            }
           
            
         
        }
        return ansHead->next;
       
    }
};
