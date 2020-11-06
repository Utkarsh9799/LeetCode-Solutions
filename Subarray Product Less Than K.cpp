class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i, start = 0, prod = 1, n = nums.size(), ctr = 0;
        for(i = 0; i < n; i++)
        {a
            prod *= nums[i];
            while(prod >= k && start < i + 1)
            {
                prod /= nums[start];
                start++;
            }
            ctr += i - start + 1;
        }
        return ctr;
    }
};
