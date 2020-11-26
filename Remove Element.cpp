class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size();
        for(i = 0; i < j; i++)
        {
            if(nums[i] == val)
            {
                while(nums[j - 1] == val && (j - 1) > i)
                    j--;
                nums[i] = nums[j - 1];
                j--;
            }
        }
        return j;
    }
};
