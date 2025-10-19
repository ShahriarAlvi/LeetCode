class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int left = 0, right = 0, result = 0;

        for (int right = 0; right < n; right++) {
            while (nums[right] - nums[left] > 1)
                left++;

            if (nums[right] - nums[left] == 1) {
                result = max(result, right - left + 1);
            }
        }

        return result;
    }
};