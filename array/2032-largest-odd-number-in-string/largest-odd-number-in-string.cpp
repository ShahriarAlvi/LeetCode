class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int temp, idx = -1;
        for (int i = 0; i < n; i++) {
            temp = num[i] - '0';
            if (temp % 2 == 1)
                idx = max(idx, i);
        }
        string s = "";
        for (int i = 0; i <= idx; i++) {
            s += num[i];
        }
        return s;
    }
};