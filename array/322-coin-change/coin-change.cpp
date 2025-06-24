class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, 1e9);
        int taken, not_taken;

        if (coins[0] <= amount)
            dp[coins[0]] = 1;
        dp[0] = 0;

        for (int ind = 0; ind < coins.size(); ind++) {
            for (int target = coins[ind]; target <= amount; target++) {
                not_taken = dp[target];
                taken = 1e9;
                if (coins[ind] <= target) {
                    taken = 1 + dp[target - coins[ind]];
                }
                dp[target] = min(taken, not_taken);
            }
        }

        return (dp[amount] == 1e9) ? -1 : dp[amount];
    }
};