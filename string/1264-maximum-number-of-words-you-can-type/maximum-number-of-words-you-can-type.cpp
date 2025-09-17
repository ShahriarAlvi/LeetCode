class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool flag = false;
        int n = text.size();
        int cnt = 1;

        for (int i = 0; i < n; i++) {
            if (text[i] == ' ') {
                flag = false;
                cnt++;
            } else if (!flag && brokenLetters.find(text[i]) != string::npos) {
                flag = true;
                cnt--;
            }
        }

        return cnt;
    }
};