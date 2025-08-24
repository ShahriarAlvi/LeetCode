class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int left = 0, total = 0;
        bool flag = false;

        for (int right = 0; right < n; right++) {
            int a = nums[right];

            if (!a) {
                if (!flag)
                    flag = true;
                else {
                    while (left <= right && nums[left])
                        left++;
                    left++;
                }
            }
            total = max(total, right - left);
        }

        return total;
    }
};