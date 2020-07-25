class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int i, j, sum = 0, n = nums.size();
        for(i = 0; i < n; i++)
        {
            sum += nums[i];
        }
        
        if(sum % 2 != 0)
            return false;
        
        sum /= 2;
        bool dp[n + 1][sum + 1];
        
        for(i = 0; i <= n; i++)
        {
            for(j = 0; j <= sum; j++)
            {
                if(i == 0)
                {
                    dp[i][j] = false;
                    continue;
                }
                
                if(j == 0)
                {
                    dp[i][j] = true;
                    continue;
                }
                
                if(nums[i - 1] <= j)
                    dp[i][j] = ((dp[i - 1][j]) || (dp[i - 1][j - nums[i - 1]]));
                
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        
        return dp[n][sum];
    }
};
