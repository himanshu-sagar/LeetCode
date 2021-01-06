class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int n=nums.size();
        int count=0;
        for(auto it=nums.begin();it!=nums.end();it++)
        {
            if (*it==val)
            {
                nums.erase(it);
                count++;
                it--;
            }
        }
        return n-count;
    }
};