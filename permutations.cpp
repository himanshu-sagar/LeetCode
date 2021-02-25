class Solution {
public:
    void generatePermutations(vector<vector<int>>&result,int start,int end,vector<int>& nums)
    {
        if(start>=end)
        {
            result.push_back(nums);
            return;
        }
        for(int i=start;i<=end;i++)
        {
            swap(nums[i],nums[start]);
            generatePermutations(result,start+1,end,nums);
            //backtracking
            swap(nums[i],nums[start]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        generatePermutations(result,0,nums.size()-1,nums);
        return result;
    }
};