class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> mp;
        int n = s.length();
        int left = 0;
        int result = 0;

        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            while (mp['a'] > 0 && mp['b'] > 0 && mp['c'] > 0) {
                result += n - i;
                mp[s[left]]--;
                left++;
            }
        }
        return result;
    }
};