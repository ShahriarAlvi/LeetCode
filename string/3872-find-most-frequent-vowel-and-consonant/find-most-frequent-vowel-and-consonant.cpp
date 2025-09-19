class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        int v = 0, c = 0;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            if (isVowel(ch)) {
                v = max(v, mp[ch]);
            } else {
                c = max(c, mp[ch]);
            }
        }

        return v + c;
    }

private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};