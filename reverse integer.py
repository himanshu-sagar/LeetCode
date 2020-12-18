class Solution:
    def reverse(self, x: int) -> int:
        if x>=0:
            x=str(x)
            x=x[::-1]
            x=int(x)
            if x>=-2147483648 and x<=2147483647:
                return x
            else:
                return 0
        else:
            x=-1*x
            x=str(x)
            x=x[::-1]
            x=-1*int(x)
            if x>=-2147483648 and x<=2147483647:
                return x
            else:
                return 0
        