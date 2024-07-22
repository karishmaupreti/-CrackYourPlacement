class Solution {
public:
   Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    int sizeOfLL(Node* head){
        Node* temp=head;
        int ans=0;
        while(temp!=NULL){
            ans++;
            temp=temp->next;
        }
        return ans;
    }
    int compare(Node* head1, Node* head2) {
    int l1 = sizeOfLL(head1);
    int l2 = sizeOfLL(head2);
    if (l1 != l2) return l1 - l2;

    while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data) return head1->data - head2->data;
        head1 = head1->next;
        head2 = head2->next;
    }

    return 0;
}
    
    Node* subLinkedList(Node* head1, Node* head2) {
       while (head1 != NULL && head1->data == 0) {
        head1 = head1->next;
    }
    while (head2 != NULL && head2->data == 0) {
        head2 = head2->next;
    }

    
    if(head1==NULL && head2==NULL){
        Node* ans=new Node(0);
        return ans;
    }
    if (head1 == NULL) return head2;
    if (head2 == NULL) return head1; 
    
    

    
    int l1 = sizeOfLL(head1);
    int l2 = sizeOfLL(head2);

   
    if (l2 > l1 || (l2 == l1 && compare(head1, head2) < 0)) {
        swap(head1, head2); // Swap the lists if necessary
    }

  
    head1 = reverse(head1);
    head2 = reverse(head2);

    int borrow = 0;
    Node* dummy = new Node(0);
    Node* p = dummy;

   
    while (head1 != NULL || head2 != NULL || borrow != 0) {
        int x = (head1 != NULL) ? head1->data : 0;
        int y = (head2 != NULL) ? head2->data : 0;

        int diff = x - y - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }

        p->next = new Node(diff);
        p = p->next;

        if (head1 != NULL) head1 = head1->next;
        if (head2 != NULL) head2 = head2->next;
    }

  
    Node* result = reverse(dummy->next);

   
    while (result != NULL && result->data == 0) {
        result = result->next;
    }

    if (result == NULL) {
        result = new Node(0);
    }

    return result;
    }
};
