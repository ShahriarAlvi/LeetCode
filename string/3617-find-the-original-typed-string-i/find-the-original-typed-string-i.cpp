class Solution {
public:
    int possibleStringCount(string word) {
        int sum = 1;
        int n = word.length();

        for (int i = 1; i < n; i++) {
            if (word[i] == word[i - 1])
                sum++;
        }

        return sum;
    }
};