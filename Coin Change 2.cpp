class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int i, j, n = coins.size();
        int dp[amount + 1];
        for(i = 0; i <= amount; i++)
            dp[i] = 0;
        dp[0] = 1;
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= amount; j++)
            {
                if(coins[i - 1] <= j)
                {
                    dp[j] = dp[j] + dp[j - coins[i - 1]];
                }
            }
        }
        return dp[amount];
    }
};
