class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0, max_element = INT_MIN;
        int n = weights.size();
        for (int i = 0; i < n; i++) {
            sum += weights[i];
            if (weights[i] > max_element)
                max_element = weights[i];
        }
        int left = max_element, right = sum, mid;
        int result = -1;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (check(weights, days, mid)) {
                result = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return result;
    }

    bool check(vector<int>& weights, int days, int mid) {
        int n = weights.size();
        int load = 0, result = 0;

        for (int i = 0; i < n; i++) {
            load += weights[i];
            if (load > mid) {
                load = weights[i];
                result++;
            }
            if (result > days)
                return false;
        }

        return (result < days) ? true : false;
    }
};