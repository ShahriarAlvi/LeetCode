class Solution {
public:
    double myPow(double x, int n) {
        if (n < 0)
            x = 1 / x;
        double result = 1;
        long number = labs(n);

        while (number) {
            if (number & 1) {
                result *= x;
            }

            x *= x;
            number >>= 1;
        }

        return result;
    }
};