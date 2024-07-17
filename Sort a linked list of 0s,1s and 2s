class Solution {
public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* zeroNode=new Node(-1);
        Node* zeroTail=zeroNode;
        Node* oneNode=new Node(-1);
        Node* oneTail=oneNode;
        Node* twoNode=new Node(-1);
        Node* twoTail=twoNode;
        
        int zeroCount=0,oneCount=0,twoCount=0;
        Node* temp=head;
        while (temp != NULL) {
            if (temp->data == 0) {
                zeroTail->next = temp;
                zeroTail = temp;
            } else if (temp->data == 1) {
                oneTail->next = temp;
                oneTail = temp;
            } else {
                twoTail->next = temp;
                twoTail = temp;
            }
            temp = temp->next;
        }
        
        
        
        if(oneNode->next==NULL){
            zeroTail->next=twoNode->next;
        }
        else{
        zeroTail->next=oneNode->next;
        }
        oneTail->next=twoNode->next;
        twoTail->next=NULL;
        Node* ansNode=zeroNode->next;
        delete(zeroNode);
        delete(oneNode);
        delete(twoNode);
        
        return ansNode;
        
    }
};
