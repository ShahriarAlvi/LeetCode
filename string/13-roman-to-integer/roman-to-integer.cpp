class Solution {
public:
    int romanToInt(string s) {
        int pos = s.size() - 1;
        int sum = 0;

        while (pos >= 0) {
            if (s[pos] == 'I') {
                sum += 1;
            } else if (s[pos] == 'V') {
                if (pos > 0 && s[pos - 1] == 'I') {
                    sum += 4;
                    pos--;
                } else
                    sum += 5;
            } else if (s[pos] == 'X') {
                if (pos > 0 && s[pos - 1] == 'I') {
                    sum += 9;
                    pos--;
                } else
                    sum += 10;
            } else if (s[pos] == 'L') {
                if (pos > 0 && s[pos - 1] == 'X') {
                    sum += 40;
                    pos--;
                } else
                    sum += 50;
            } else if (s[pos] == 'C') {
                if (pos > 0 && s[pos - 1] == 'X') {
                    sum += 90;
                    pos--;
                } else
                    sum += 100;
            } else if (s[pos] == 'D') {
                if (pos > 0 && s[pos - 1] == 'C') {
                    sum += 400;
                    pos--;
                } else
                    sum += 500;
            } else if (s[pos] == 'M') {
                if (pos > 0 && s[pos - 1] == 'C') {
                    sum += 900;
                    pos--;
                } else
                    sum += 1000;
            }
            pos--;
        }

        return sum;
    }
};