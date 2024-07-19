class Solution {
public:

    long long multiplyTwoLists(Node *first, Node *second) {
  
    
        Node* temp1=first;
        Node* temp2=second;
        long long num1=0,num2=0;
        long long mod=1000000007;
        while(temp1!=NULL){
            num1=(num1*10+(temp1->data))%mod;
            temp1=temp1->next;
        }
         while(temp2!=NULL){
            num2=(num2*10+(temp2->data))%mod;
            temp2=temp2->next;
        }
        return (num1*num2)%mod;
    }
};
