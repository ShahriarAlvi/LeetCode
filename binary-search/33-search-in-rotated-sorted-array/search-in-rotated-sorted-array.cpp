class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        return recursiveSearch(nums, left, right, target);
    }

    int recursiveSearch(vector<int>& nums, int left, int right, int target) {
        if (left > right)
            return -1;
        if (left == right)
            return (nums[left] == target) ? left : -1;

        int mid, ans;
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
            return mid;
            
        int leftCheck = -1, rightCheck = -1;
        leftCheck = recursiveSearch(nums, left, mid - 1, target);
        rightCheck = recursiveSearch(nums, mid + 1, right, target);

        return max(leftCheck, rightCheck);
    }
};