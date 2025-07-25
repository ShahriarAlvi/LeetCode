class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        unordered_map<int, bool> mp;
        int sum = 0, result = 0;

        for (int i = 0; i < n; i++) {
            if (mp[nums[i]] == false) {
                sum += nums[i];
                mp[nums[i]] = true;
            } else {
                result = max(result, sum);
                while (left < i) {
                    if (nums[left] == nums[i]) {
                        left++;
                        break;
                    }
                    sum -= nums[left];
                    mp[nums[left]] = false;
                    left++;
                }
            }
        }
        result = max(result, sum);

        return result;
    }
};