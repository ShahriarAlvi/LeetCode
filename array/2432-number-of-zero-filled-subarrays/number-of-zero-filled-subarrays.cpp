class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int streak = 0;
        int n = nums.size();
        long long int sum = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                streak++;
                sum += streak;
            } else
                streak = 0;
        }

        return sum;
    }
};