class MyQueue {
public:
    /** Initialize your data structure here. */
    public:
    stack<int> s1,s2;
    int size;
    MyQueue() {
        size=0;
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        while(!s1.empty())
        {
            int temp=s1.top();
            s2.push(temp);s1.pop(); 
        }
        s2.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());s2.pop();
        }
        size++;
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(!s1.empty())
        {
            size--;
            int temp=s1.top();s1.pop();
            return temp;
        }
        else
            return 0;
    }
    
    /** Get the front element. */
    int peek() {
        if(!s1.empty())
        {
            int temp=s1.top();
            return temp;
        }
        else
            return 0;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
         return size==0;
    }
};