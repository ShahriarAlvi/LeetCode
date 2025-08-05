class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int sum = 1;
        int result = 0;
        int n = nums.size();
        int left = 0;

        for (int right = 0; right < n; right++) {
            sum *= nums[right];
            while (left <= right && sum >= k) {
                sum /= nums[left];
                left++;
            }
            result += right - left + 1;
        }
        return result;
    }
};
