class MinStack {
public:
stack<int> s;
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        int front = s.top();
        return front;
    }
    
    int getMin() {
        int mn = INT_MAX;

        stack<int> temp = s;

        while(!temp.empty()){
            mn = min(mn, temp.top());
            temp.pop();
        }
        return mn;
    }
};
