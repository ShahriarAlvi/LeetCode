class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, 0);
        int pick, nopick;

        dp[0] = nums[0];

        for (int i = 1; i < n; i++) {
            pick = nums[i];
            if (i > 1)
                pick += dp[i - 2];
            nopick = dp[i - 1];

            dp[i] = max(pick, nopick);
        }
        return dp[n - 1];
    }
};