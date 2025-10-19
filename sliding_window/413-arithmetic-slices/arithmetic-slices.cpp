class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if (n < 3)
            return 0;
        int result = 0, temp = 0;
        int prev = nums[1] - nums[0];
        for (int i = 1; i < n - 1; i++) {
            int diff = nums[i + 1] - nums[i];
            if (diff == prev)
                temp++;
            else {
                prev = diff;
                temp = 0;
            }
            result += temp;
        }
        return result;
    }
};