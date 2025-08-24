class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        int left = 0, sum = 0, total = 0;
        bool flag = false;

        for (int i = 0; i < n; i++) {
            int a = nums[i];

            if (!a) {
                if (!flag)
                    flag = true;
                else {
                    while (left < i && nums[left])
                        left++;
                    left++;
                }
            }
            total = max(total, i - left);
        }

        return total;
    }
};