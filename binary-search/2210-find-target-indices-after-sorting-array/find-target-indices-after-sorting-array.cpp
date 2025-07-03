class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int start = binarySearch(nums, target, true);
        if (start == -1)
            return {};
            
        int end = binarySearch(nums, target, false);

        vector<int> result;
        for (int i = start; i <= end; i++) {
            result.push_back(i);
        }
        return result;
    }

    int binarySearch(vector<int>& nums, int target, bool findFirst) {
        int left = 0, right = nums.size() - 1;
        int mid, ans = -1;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (nums[mid] > target) {
                right = mid - 1;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                ans = mid;
                if (findFirst)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
        }
        return ans;
    }
};