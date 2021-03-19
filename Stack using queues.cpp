class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    queue<int> q2;
    int size;
    MyStack() {
        size=0;
    }
    
    /** Push element x onto stack. */
    void push(int x) {
           q2.push(x);
        size++;
        while(!q1.empty())
        {
            int temp=q1.front();q1.pop();
            q2.push(temp);
        }

        queue<int> q=q1;
        q1=q2;
        q2=q;
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        if(!q1.empty())
        {
            int temp=q1.front();q1.pop();size--;
            return temp;
        }
        else
            return 0;
    }
    
    /** Get the top element. */
    int top() {
        if(!q1.empty())
        {
            int temp=q1.front();
            return temp;
        }
        else
            return 0;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return size==0;
    }
};