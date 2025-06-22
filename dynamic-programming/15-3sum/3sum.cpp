class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        vector<int> temp;
        set<vector<int>> uniques; // for removing duplicates
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int k = -nums[i] - nums[j];
                if (mp.find(k) != mp.end() && mp[k] != i && mp[k] != j) {
                    temp = {nums[i], nums[j], k};
                    sort(temp.begin(), temp.end());
                    uniques.insert(temp);
                }
            }
            mp[nums[i]] = i;
        }

        // converting the set into regular vector
        vector<vector<int>> result(uniques.begin(), uniques.end());
        return result;
    }
};