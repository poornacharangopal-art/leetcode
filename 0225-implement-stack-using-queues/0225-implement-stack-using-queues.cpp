class MyStack {
public:
   queue<int>q1;
   queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int value;
        while(!q1.empty()){
            int v=q1.front();
            q1.pop();
            if(!q1.empty()){
                q2.push(v);
            }
            else{
                value=v;
            }
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        return value;
    }
    
    int top() {
          int value;
        while(!q1.empty()){
            int v=q1.front();
            q1.pop();
            q2.push(v);
            if(q1.empty()){
                value=v;
            }
        }
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        } 
        return value;
    }
    
    bool empty() {
        if(q1.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */