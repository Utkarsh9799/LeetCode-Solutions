class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i, max = INT_MIN, curr_max = 0;
        for(i = 0; i < nums.size(); i++)
        {
            curr_max += nums[i];

            max = curr_max > max ? curr_max : max;
            
            if(curr_max < 0)
                curr_max = 0;            
            
        }
        return max;
    }
};
