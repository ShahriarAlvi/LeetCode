class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());
        int mid, result = -1;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (thresholdDivisor(nums, mid, threshold)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }

    bool thresholdDivisor(vector<int>& nums, int divisor, int threshold) {
        int sum = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            sum += ceil((double)nums[i] / divisor);
        }
        // cout << divisor << " " << sum << endl;
        return (sum <= threshold);
    }
};