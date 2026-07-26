class MinStack {
    stack<int> s,s1;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(!s1.empty() && s.top() <= s1.top()) s1.push(val);
        else if(s1.empty()) s1.push(val);
    }
    
    void pop() {
        if(s1.top() == s.top()){
            s.pop();s1.pop();
        }
        else s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s1.top();
    }
};
