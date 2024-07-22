class MyQueue {
private:
   stack<int>st1;
    stack<int>st2;

public:
  
    MyQueue() {
        
    }
    
    void push(int x) {
       st1.push(x);
    }
    
    int pop() {
        if(st2.empty()){
        while(!st1.empty()){
            int ele=st1.top();
            st1.pop();
            st2.push(ele);
        }
        int ans=st2.top();
        st2.pop();
         return ans;
        }
        int ans=st2.top();
    
        st2.pop();
        return ans;
    
    }
    int peek() {
        if(st2.empty()){
        while(!st1.empty()){
            int ele=st1.top();
            st1.pop();
            st2.push(ele);
        }
        return st2.top();
    }
    return st2.top();
    }
    bool empty() {
        return st1.empty() && st2.empty();
    }
};
