class Solution {
public:
   class Compare{
    public:
    bool operator()(ListNode* a,ListNode*b){
        return a->val >b->val;
    }
   };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,Compare>p;
        for (ListNode* node : lists) {
            if (node != nullptr) {
                p.push(node);
            }
        }

        ListNode* root=new ListNode(-1);
        ListNode* tail=root;
        while(!p.empty()){
            ListNode* temp=p.top();
            p.pop();
            tail->next=temp;
            tail=temp;
            if(temp!=NULL && temp->next!=NULL){
                p.push(temp->next);
            }
        }
        return root->next;
    }
};
