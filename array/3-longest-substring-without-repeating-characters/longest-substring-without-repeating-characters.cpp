class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<int> track;
        int left = 0, sum = 0, result = 0;

        for (int i = 0; i < n; i++) {
            while (track.count(s[i])) {
                sum--;
                track.erase(s[left]);
                left++;
            }
            sum++;
            track.insert(s[i]);
            result = max(result, sum);
        }
        return result;
    }
};