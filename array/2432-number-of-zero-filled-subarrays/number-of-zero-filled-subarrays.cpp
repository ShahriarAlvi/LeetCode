class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        long long int sum = 0;

        for (int right = 0; right < n; right++) {
            if (nums[right] == 0) {
                sum += (right - left + 1);
            } else {
                left = right + 1;
            }
        }

        return sum;
    }
};