class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k - 1);
    }

    int helper(vector<int>& nums, int k) {
        int sum = 0, result = 0;
        int n = nums.size();
        int left = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] % 2 == 1) {
                sum++;
            }

            while (sum > k && left <= right) {
                if (nums[left] % 2 == 1)
                    sum--;
                left++;
            }
            result += right - left + 1;
        }

        return result;
    }
};