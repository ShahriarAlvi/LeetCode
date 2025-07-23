class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int len1, len2, len;
        int start = 0, maxLen = 0;
        for (int i = 0; i < n; i++) {
            len1 = expandAroundCenter(s, i, i);
            len2 = expandAroundCenter(s, i, i + 1);
            len = max(len1, len2);
            if (maxLen < len) {
                maxLen = len;
                start = i - (len - 1) / 2;
            }
        }

        return s.substr(start, maxLen);
    }

    int expandAroundCenter(string s, int left, int right) {
        int n = s.size();
        while (left >= 0 && right < n && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};