class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        for (int i = 0; i < n - 1; i++) {
            int pick = target - numbers[i];
            int left = i + 1, right = n - 1;
            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (numbers[mid] == pick)
                    return {i + 1, mid + 1};
                if (numbers[mid] < pick)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return {0, 0};
    }
};