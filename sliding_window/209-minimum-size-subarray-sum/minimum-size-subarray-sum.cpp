class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int result = 0, sum = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            if (sum >= target) {
                if (result == 0)
                    result = right - left + 1;
                else
                    result = min(result, right - left + 1);
            }

            while (sum > target && left <= right) {
                sum -= nums[left];
                left++;
                if (sum >= target) {
                    if (result == 0)
                        result = right - left + 1;
                    else
                        result = min(result, right - left + 1);
                }
            }
        }

        return result;
    }
};