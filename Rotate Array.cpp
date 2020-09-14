class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans(nums.size());
        int i, n = nums.size();
        for(i = 0; i < n; i++)
            ans[(i + k) % n] = nums[i];
        nums = ans;
    }
};
