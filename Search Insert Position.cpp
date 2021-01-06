class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int res;
        for(int i=0;i<n;i++)
        {
            if (nums[i]==target)
            {
                res=i;
                break;
            }
            else if(nums[i]>target)
            {
                res=i;
                break;
            }
            else
            {
                res=i+1;
                
            }
        }
        return res;
    }
};