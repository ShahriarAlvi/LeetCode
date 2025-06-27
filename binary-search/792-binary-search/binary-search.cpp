class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int mid, left = 0, right = n - 1;

        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] > target)
                right = mid - 1;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                return mid;
        }
        return -1;
    }
};