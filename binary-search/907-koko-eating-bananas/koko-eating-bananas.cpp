class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_value = 0;
        int n = piles.size();
        int result;

        for (int i = 0; i < n; i++) {
            if (piles[i] > max_value) {
                max_value = piles[i];
            }
        }

        int left = 1, right = max_value, mid;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (calculateHours(piles, mid) <= h) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }

    long long int calculateHours(vector<int>& piles, int value) {
        long long int total = 0;
        int n = piles.size();
        for (int i = 0; i < n; i++) {
            total += ceil((double)piles[i] / (double)value);
        }
        return total;
    }
};