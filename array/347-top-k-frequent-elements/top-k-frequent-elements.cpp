class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
            mp[nums[i]]++;

        vector<vector<int>> bucket(n + 1);
        vector<int> ans;

        for (auto it = mp.begin(); it != mp.end(); it++)
            bucket[it->second].push_back(it->first);

        for (int i = n; i >= 0; i--) {
            for (int j = 0; j < bucket[i].size() && ans.size() < k; j++)
                ans.push_back(bucket[i][j]);
        }

        return ans;
    }
};