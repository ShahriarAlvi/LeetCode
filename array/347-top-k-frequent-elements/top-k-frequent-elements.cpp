class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counter;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            counter[nums[i]]++;
        }

        priority_queue<pair<int, int>> track;

        for (auto it = counter.begin(); it != counter.end(); it++) {
            track.push({it->second, it->first});
        }

        vector<int> ans;
        int count = 0;

        for (int i = 0; i < k; i++) {
            ans.push_back(track.top().second);
            track.pop();
        }

        return ans;
    }
};