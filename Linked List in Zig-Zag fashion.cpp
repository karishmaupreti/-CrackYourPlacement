class Solution {
public:
    Node* zigZag(Node* head) {
        // your code goes here
        
        Node*curr=head;
        bool flag=true;
         while(curr!=NULL && curr->next !=NULL){
             if(flag==true){
                 if(curr->data>curr->next->data){
                     swap(curr->data,curr->next->data);
                 }
             }
             else{
                 if(curr->data<curr->next->data){
                     swap(curr->data,curr->next->data);
                 }
             }
             flag=!flag;
             curr=curr->next;
         }
         return head;
    }
};
