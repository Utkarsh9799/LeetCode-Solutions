class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i, ctr = 0;
        for(i = 0; i < nums.size(); i++)
        {
            if(!nums[i])
                ctr++;
            else
                swap(nums[i - ctr], nums[i]);
        }
    }
};
