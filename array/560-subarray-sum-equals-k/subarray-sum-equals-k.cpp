class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0, result = 0;
        int n = nums.size();
        unordered_map<int, int> track;
        track[0] = 1;

        for (int i = 0; i < n; i++) {
            sum = sum + nums[i];
            if (track.count(sum - k)) {
                result+= track[sum - k];
            }
            track[sum]++;
        }

        return result;
    }
};