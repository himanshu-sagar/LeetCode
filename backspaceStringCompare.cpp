class Solution {
public:
    bool backspaceCompare(string s1, string s2) {
        stack<char> st1;
    stack<char> st2;
    int n1=s1.length();
    int n2=s2.length();
    for(int i=0;i<n1;i++)
    {
        if(s1[i]!='#')
        {
            st1.push(s1[i]);
        }
        else
        {
            if(!st1.empty())
            {
                st1.pop();
            }
        }
    }
    for(int i=0;i<n2;i++)
    {
        if(s2[i]!='#')
        {
            st2.push(s2[i]);
        }
        else
        {
            if(!st2.empty())
            {
                st2.pop();
            }
        }
    }
    while(!st1.empty() && !st2.empty())
    {
        if(st1.top()==st2.top())
        {
            st1.pop();st2.pop();
        }
        else
        {
            return false;
        }
    }
    if(st1.empty() && st2.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
    }
};