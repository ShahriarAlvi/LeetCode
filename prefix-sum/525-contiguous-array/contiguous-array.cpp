class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum = 0, result = 0;
        int n = nums.size();

        unordered_map<int, int> track{{0, -1}};

        for (int i = 0; i < n; i++) {
            sum += nums[i] == 1 ? 1 : -1;

            if (track.count(sum)) {
                result = max(result, i - track[sum]);
            } else {
                track[sum] = i;
            }
        }

        return result;
    }
};