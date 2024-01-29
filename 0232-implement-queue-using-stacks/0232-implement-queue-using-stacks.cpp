class MyQueue {
public:
    stack<int> st1, st2;
    MyQueue() {
        
    }
    void change(){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
    }
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if(st2.empty()){
            change();
        }
        int x = st2.top();
        st2.pop();
        return x;
    }
    
    int peek() {
        if(st2.empty()){
            change();
        }
        return st2.top();
    }
    
    bool empty() {
        return (st1.empty() && st2.empty());
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */