class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int x;
        while(q1.size()>1){
            x = q1.front();
            q1.pop();
            q2.push(x);
        }
        x=q1.front();
        q1.pop();
        while(!q2.empty()){
            int y = q2.front();
            q2.pop();
            q1.push(y);
        }
        return x;
    }
    
    int top() {
        int x;
        while(!q1.empty()){
            x = q1.front();
            q1.pop();
            q2.push(x);
        }
        while(!q2.empty()){
            int y = q2.front();
            q2.pop();
            q1.push(y);
        }
        return x;
    }
    
    bool empty() {
        return q1.empty();
    }
};
