/* created two stack and maintain the values in one stack in minimum in one stack 
also optimise it using store only until minimum eelement in minmum stack which reduce space complexity to some stack */




class MinStack {
public:
    stack<int>st;
    stack<int> mst;
    MinStack() {
        
    }
    
    void push(int x) {
        if(mst.empty() || x<=getMin()) mst.push(x);
        st.push(x);
    
        
    }
    
    void pop() {
        if(st.top()==getMin()) mst.pop();
        st.pop();
        
    }
    
    int top() {
        return st.top();
        
    }
    
    int getMin() {
        return mst.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */