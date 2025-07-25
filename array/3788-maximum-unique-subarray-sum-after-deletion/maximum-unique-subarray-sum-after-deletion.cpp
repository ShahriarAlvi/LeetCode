class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, bool> mp;
        int sum = 0, maxValue = INT_MIN;

        for (int i = 0; i < n; i++) {
            maxValue = max(maxValue, nums[i]);
            if (nums[i] < 0)
                continue;
            if (!mp[nums[i]]) {
                sum += nums[i];
                mp[nums[i]] = true;
            }
        }
        return (maxValue < 0) ? maxValue : sum;
    }
};