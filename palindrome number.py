class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x>=0:
            x=str(x)
            x=list(x)
            xr=x[::-1]
            if x==xr:
                return True
            else:
                return False
        