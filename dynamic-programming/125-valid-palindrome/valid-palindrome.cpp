class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0;
        int j = n - 1;

        while (i <= j) {
            if (!isAlNum(s[i])) {
                i++;
                continue;
            } else if (!isAlNum(s[j])) {
                j--;
                continue;
            } else if (tolower(s[i]) != tolower(s[j])) {
                return false;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }

    bool isAlNum(char c) {
        if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) ||
            (c >= 97 && c <= 122))
            return true;
        return false;
    }
};