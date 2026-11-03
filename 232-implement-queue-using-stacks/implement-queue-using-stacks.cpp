class MyQueue {
public:
    stack<int> st;
    stack<int> stq;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
        
    }
    
    int pop() {
        if(stq.empty()){
        while(!st.empty()){
            stq.push(st.top());
            st.pop();
        }
        }
        int a=stq.top();
        stq.pop();
        return a;
    }
    
    int peek() {
        if(stq.empty()){
        while(!st.empty()){
            stq.push(st.top());
            st.pop();
        }
        }
        return stq.top();
    }
    
    bool empty() {
        return st.empty() && stq.empty();
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