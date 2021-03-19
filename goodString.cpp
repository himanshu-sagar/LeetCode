class Solution {
public:
    bool isGood(char a,char b)
{
    if(isupper(a) && islower(b) && tolower(a)==tolower(b))
        return false;
    else if(islower(a) && isupper(b) && tolower(a)==tolower(b))
        return false;
    else
        return true;
}
string makeGood(string s) 
{
    stack<char> st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++)
    {
        if(!st.empty() && isGood(st.top(),s[i]))
        {
            st.push(s[i]);
        } 
        else if(st.empty())
        {
            st.push(s[i]);
        } 
        else
        {
            st.pop();
        }
    }
    string str="";
    while(!st.empty())
    {
        str=str+st.top();
        st.pop();
    }
    reverse(str.begin(),str.end());
    return str;
}
};