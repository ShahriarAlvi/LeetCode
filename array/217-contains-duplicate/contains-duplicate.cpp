class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_set<int> track;

        for (int i = 0; i < n; i++) {
            if (track.find(nums[i]) != track.end())
                return true;
            track.insert(nums[i]);
        }

        return false;
    }
};