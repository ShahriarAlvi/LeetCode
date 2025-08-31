class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";
        int n = columnNumber;
        int curr;
        while (n > 0) {
            n--;
            curr = n % 26;
            n /= 26;
            result.push_back(curr + 'A');
        }

        reverse(result.begin(), result.end());
        return result;
    }
};