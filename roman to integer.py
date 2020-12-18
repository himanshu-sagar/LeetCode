class Solution:
    def romanToInt(self, s: str) -> int:
        symbols={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        s=list(s)
        num=0
        for i in range(len(s)):
            if i+1 != len(s) and symbols[s[i]]<symbols[s[i+1]]:
                num=num-symbols[s[i]]
            else:
                num=num+symbols[s[i]]
        return num