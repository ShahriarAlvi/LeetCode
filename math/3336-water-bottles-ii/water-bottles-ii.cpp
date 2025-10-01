class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int sum = 0;
        while (numBottles >= numExchange) {
            sum += numExchange;
            numBottles -= (numExchange - 1);
            numExchange++;
        }
        return sum + numBottles;
    }
};