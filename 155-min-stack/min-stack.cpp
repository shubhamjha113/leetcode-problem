class MinStack {
     stack<pair<int,int>> s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            s.push({val,min(val,s.top().second)});
        }
    }
    
    void pop() {
        if(s.empty()) return;
        else s.pop();
    }
    
    int top() {

        return s.empty() ? -1:s.top().first;
    }
    
    int getMin() {
        return s.empty() ? -1 :s.top().second;
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