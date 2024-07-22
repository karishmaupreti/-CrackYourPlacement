class MyStack {
public:
   queue<int>q;
    MyStack() {
      
    }
    
    void push(int x) {
       q.push(x);
       for(int i=0;i<q.size()-1;i++){
        int ele=q.front();
        q.pop();
        q.push(ele);
       }
    }
    
    int pop() {
        int ele=q.front();
        q.pop();
        return ele;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.size()==0;
    }
};
