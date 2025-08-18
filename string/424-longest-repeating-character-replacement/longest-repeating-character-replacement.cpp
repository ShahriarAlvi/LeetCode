class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int left = 0;
        int maxm = 0, result = 0;
        unordered_map<char, int> track;

        for (int right = 0; right < n; right++) {
            track[s[right]]++;
            maxm = max(maxm, track[s[right]]);

            if ((right - left + 1) - maxm > k) {
                track[s[left]]--;
                left++;
            } else {
                result = max(result, right - left + 1);
            }
        }

        return result;
    }
};