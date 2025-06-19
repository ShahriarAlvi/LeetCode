class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> sub1;
        vector<int> sub2;
        if (n == 1)
            return nums[0];

        for (int i = 0; i < n; i++) {
            if (i != n - 1)
                sub1.push_back(nums[i]);
            if (i != 0)
                sub2.push_back(nums[i]);
        }

        int res1 = subResult(sub1);
        int res2 = subResult(sub2);

        return max(res1, res2);
    }

    int subResult(vector<int>& arr) {
        int n = arr.size();
        vector<int> dp(n, -1);
        dp[0] = arr[0];

        for (int i = 1; i < n; i++) {
            int pick = arr[i];
            if (i > 1)
                pick += dp[i - 2];
            int nopick = dp[i - 1];
            dp[i] = max(pick, nopick);
        }
        return dp[n - 1];
    }
};