class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<char, int> mp;
            for (int j = i; j < n; j++) {
                mp[s[j]]++;

                int maxCount = INT_MIN, minCount = INT_MAX;

                for (auto it : mp) {
                    minCount = min(minCount, it.second);
                    maxCount = max(maxCount, it.second);
                }
                sum += (maxCount - minCount);
            }
        }

        return sum;
    }
};