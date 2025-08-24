class Solution {
public:
    string addBinary(string a, string b) {
        int d1 = a.size() - 1, d2 = b.size() - 1;
        int sum, carry = 0;
        string result = "";

        while (d1 >= 0 || d2 >= 0 || carry) {
            sum = carry;
            if (d1 >= 0)
                sum += a[d1--] - '0';
            if (d2 >= 0)
                sum += b[d2--] - '0';
            carry = sum / 2;
            result += '0' + (sum % 2);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};