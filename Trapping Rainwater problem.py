class Solution:
    def trap(self, height):
        n=len(height)
        leftmax=[]
        rightmax=[None]*n
        totalWater=0
        if n>0:
            leftmax.append(height[0])
            for i in range(1,n):
                if height[i]>leftmax[-1]:
                    leftmax.append(height[i])
                else:
                    leftmax.append(leftmax[-1])
            print(leftmax)
            rightmax[-1]=height[-1]
            for i in range(n-2,-1,-1):
                rightmax[i]=max(rightmax[i+1],height[i])
            print(rightmax)

            for i in range(1,n):
                  totalWater=totalWater+min(leftmax[i],rightmax[i])-height[i]
        return totalWater