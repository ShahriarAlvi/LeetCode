class Solution {
public:
    // Dutch National Flag Problem
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n - 1;

        for (int i = 0; i <= end; i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[start]);
                start++;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[end]);
                end--;
                i--;
            }
        }
    }
};