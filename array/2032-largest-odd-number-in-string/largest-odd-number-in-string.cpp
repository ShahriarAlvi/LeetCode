class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int temp;
        for (int i = n - 1; i >= 0; i--) {
            temp = num[i] - '0';
            if (temp % 2 == 1) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};