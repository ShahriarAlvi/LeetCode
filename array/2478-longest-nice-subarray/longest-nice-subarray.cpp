class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, result = 0;
        int left = 0;

        for (int right = 0; right < n; right++) {
            while ((sum & nums[right]) != 0) {
                sum = sum ^ nums[left];
                left++;
            }
            sum = sum | nums[right];
            result = max(result, right - left + 1);
        }

        return result;
    }
};