class Solution:
    def matching(c1,c2):
        if (c1=='(') & (c2==')'):
            return True
        elif (c1=='{') & (c2=='}'):
            return True
        elif (c1=='[') & (c2==']'):
            return True
        else:
            return False
    def isBalanced(s):
        from queue import LifoQueue 
        st = LifoQueue() 
        for i in range(len(s)):
            if ((s[i] == '{') | (s[i] == '[') | (s[i] == '(')):
                st.put(s[i])
            else:
                if st.empty()==True:
                    return False
                elif Solution.matching(st.get(),s[i])==False:
                    return False
        if st.empty()==True:
            return True
        else:
            return False
    def isValid(self, s: str) -> bool:
        return Solution.isBalanced(s)
    