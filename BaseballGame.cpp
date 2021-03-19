class Solution {
public:
    int calPoints(vector<string>& records) {
        int n=records.size();
    stack<string> st;
    st.push(records[0]);
    for(int i=1;i<n;i++)
    {
        if(records[i]=="+")
        {
            int a=stoi(st.top());st.pop();
            int b=stoi(st.top());
            cout<<"a: "<<a<<endl;
            cout<<"b: "<<a<<endl;
            st.push(to_string(a));
            st.push(to_string(a+b));
        }
        else if(records[i]=="D")
        {
            int a=stoi(st.top());
            st.push(to_string(2*a));
        }
        else if(records[i]=="C")
        {
            st.pop();
        }
        else
        {
            st.push(records[i]);
        }
    }
    int sum=0;
    while(!st.empty())
    {
        sum+=stoi(st.top());st.pop();
    }
    return sum;
    }
};