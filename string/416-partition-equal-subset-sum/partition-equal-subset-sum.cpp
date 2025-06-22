class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        bool not_taken, taken;
        for (int i = 0; i < n; i++)
            sum += nums[i];

        if (sum % 2 == 1)
            return false;

        sum /= 2;

        vector<vector<bool>> dp(n, vector<bool>(sum + 1, false));

        for (int i = 0; i < n; i++) {
            dp[i][0] = true;
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= sum; j++) {
                not_taken = dp[i - 1][j];
                taken = false;
                if (nums[i] <= j)
                    taken = dp[i - 1][j - nums[i]];
                dp[i][j] = not_taken || taken;
            }
        }

        return dp[n - 1][sum];
    }
};