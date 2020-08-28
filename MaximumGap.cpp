class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size() < 2)
            return 0;
            
        sort(nums.begin(), nums.end());
        
        int minDiff = INT_MIN, n = nums.size();
        for(int i = 1; i < n; i++)
        {
            int currDiff = nums[i] - nums[i - 1];
            if(currDiff > minDiff)
                minDiff = currDiff;
        }
        
        return minDiff;
    }
};
