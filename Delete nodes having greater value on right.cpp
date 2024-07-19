class Solution {
 public:
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL;
        Node* next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head=reverse(head);
        Node* newHead=NULL;
        Node* newTail=NULL;
        Node*curr=head;
        int maxi=INT_MIN;
        while(curr!=NULL){
            if(curr->data>=maxi){
                Node* temp=new Node(curr->data);
                if(newHead==NULL){
                    newHead=temp;
                    newTail=temp;
                }
                else{
                    newTail->next=temp;
                    newTail=temp;
                    
                }
                maxi=curr->data;
            }
            curr=curr->next;
            
        }
        Node*ans=reverse(newHead);
        return ans;
        
    }
};
