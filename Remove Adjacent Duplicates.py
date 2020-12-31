class Solution:
    def removeDuplicates(self, S: str) -> str:
        s=list(S)
        print(s)
        st=[]
        
        for i in s:
            if len(st)>0:
                if i==st[-1]:
                    st.pop()
                else:
                    st.append(i)
            else:
                st.append(i)
        st=''.join(st)
        return st
          


s=Solution()
s.removeDuplicates("abbaca")