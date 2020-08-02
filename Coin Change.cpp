class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int i, j, n = coins.size();
        int dp[amount + 1];
        dp[0] = 0;
        for(i = 1; i <= amount; i++)
            dp[i] = INT_MAX - 1;
        
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j <= amount; j++)
            {
                if(coins[i -1] <= j)
                    dp[j] = min(dp[j], dp[j - coins[i -  1]] + 1);
            }
        }
        return dp[amount] >= INT_MAX - 1 ? -1 : dp[amount];
    }
};
