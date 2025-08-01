class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;

        // n & (n - 1) removes the rightmost 1-bit
        while (n) {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
};