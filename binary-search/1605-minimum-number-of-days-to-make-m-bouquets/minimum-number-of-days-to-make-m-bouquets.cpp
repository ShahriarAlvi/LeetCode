class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if ((long long int)n < ((long long int)m * (long long int)k))
            return -1;
        int min_val = INT_MAX, max_val = INT_MIN;

        for (int i = 0; i < n; i++) {
            min_val = min(min_val, bloomDay[i]);
            max_val = max(max_val, bloomDay[i]);
        }

        int left = min_val, right = max_val, mid;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (possible(bloomDay, m, k, mid))
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }

    bool possible(vector<int>& bloom, int m, int k, int day) {
        int n = bloom.size();
        int cnt = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            if (bloom[i] <= day) {
                cnt++;
            } else {
                sum += floor((double)cnt / (double)k);
                cnt = 0;
                if (sum >= m)
                    return true;
            }
        }
        sum += floor((double)cnt / (double)k);
        return (sum >= m) ? true : false;
    }
};