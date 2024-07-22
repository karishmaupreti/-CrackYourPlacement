class Solution {
public:
    Node* divide(int N, Node *head){
        // code here
        Node*evenHead=new Node(-1);
        Node*evenTail=evenHead;
        Node*oddHead=new Node(-1);
        Node*oddTail=oddHead;
        
        Node* temp=head;
        while(temp!=NULL){
            Node* newNode=new Node(temp->data);
            if(temp->data%2==0){
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
       
        Node* ans=evenHead->next;
        delete(evenHead);
        delete(oddHead);
        return ans;
        
    }
};
