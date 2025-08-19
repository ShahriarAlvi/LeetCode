class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return slidingAt(nums, goal) - slidingAt(nums, goal - 1);
    }

private:
    int slidingAt(vector<int>& nums, int goal) {
        int sum = 0, result = 0;
        int n = nums.size();
        int left = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            while (left <= i && sum > goal) {
                sum = sum - nums[left];
                left++;
            }
            result += i - left + 1;
        }

        return result;
    }
};