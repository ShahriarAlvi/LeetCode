class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        if (arr[n - 1] == n)
            return n + k;
        if (arr[0] > k)
            return k;
        int left = 0, right = n - 1, mid;

        while (left <= right) {
            mid = left + (right - left) / 2;
            if (arr[mid] - (mid + 1) >= k) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return left + k;
    }
};