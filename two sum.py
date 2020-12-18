class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        print(nums)
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if int(nums[i])+int(nums[j])==target:
                    return list((index(i),index(j)))
    
                            