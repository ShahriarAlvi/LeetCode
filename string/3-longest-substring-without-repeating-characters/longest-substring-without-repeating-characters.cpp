class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        unordered_set<char> track;
        int left = 0, result = 0;

        for (int right = 0; right < n; right++) {
            while (track.count(s[right])) {
                track.erase(s[left]);
                left++;
            }
            track.insert(s[right]);
            result = max(result, right - left + 1);
        }
        return result;
    }
};