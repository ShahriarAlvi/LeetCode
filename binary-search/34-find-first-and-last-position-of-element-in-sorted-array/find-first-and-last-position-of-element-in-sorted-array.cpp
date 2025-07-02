class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int mid, left = 0, right = n - 1;
        int leftRes = -1, rightRes = -1;

        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] >= target) {
                if (nums[mid] == target)
                    leftRes = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        left = 0, right = n - 1;

        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else {
                if (nums[mid] == target)
                    rightRes = mid;
                left = mid + 1;
            }
        }

        return {leftRes, rightRes};
    }
};