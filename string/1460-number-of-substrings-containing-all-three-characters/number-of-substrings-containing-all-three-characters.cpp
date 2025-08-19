class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> track(3, 0);
        int n = s.length();
        int left = 0;
        int result = 0;

        for (int i = 0; i < n; i++) {
            track[s[i] - 'a']++;
            while (track[0] > 0 && track[1] > 0 && track[2] > 0) {
                result += n - i;
                track[s[left] - 'a']--;
                left++;
            }
        }
        return result;
    }
};