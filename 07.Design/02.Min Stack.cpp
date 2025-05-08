class MinStack {
     stack<pair<int, int>> st;
public:
    MinStack() {
        
    }
    
    void push(int val) {
          int min;
        if (st.empty()) {
            min = val;  // If the stack is empty, the current value is the minimum
        } else {
            min = std::min(st.top().second, val);  // Compare with the current minimum in the stack
        }
        st.push({val, min});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
         return st.top().first;
    }
    
    int getMin() {
         return st.top().second;
    }
};
