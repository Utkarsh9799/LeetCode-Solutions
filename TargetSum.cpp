class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        
        int i, j, range = 0, ctr = 0, sum, n = nums.size();
            
        for(int i = 0; i < n; i++)
        {
            range += nums[i];
            if(nums[i] == 0)
                ctr++;
        }
        
        if(S > range)
            return 0;
        
        if((S + range) % 2 != 0)
            return 0;
        
        sum = (range + S) / 2;
        
        int dp[n + 1][sum + 1];
        
        for(i=0;i<n+1;i++)
            dp[i][0] = 1;
        for(j=1;j<sum+1;j++)
            dp[0][j] = 0;
        
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= sum; j++)
            {
                if(nums[i - 1] == 0)
                    dp[i][j] = dp[i - 1][j];
                
                else if(nums[i -1] <= j)
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
                
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return pow(2, ctr) * dp[n][sum];
    }
};
