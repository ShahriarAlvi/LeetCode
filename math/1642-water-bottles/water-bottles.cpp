class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int carry = 0, sum = 0;
        while (numBottles > 0) {
            sum += numBottles;
            carry += numBottles % numExchange;
            numBottles /= numExchange;
            if (carry >= numExchange) {
                numBottles += carry / numExchange;
                carry %= numExchange;
            }
        }

        return sum;
    }
};