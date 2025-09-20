class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n = nums.size();
        vector<int> store(n + 1);
        store[0] = 0;
        for (int i = 1; i <= n; i++)
            store[i] = store[i - 1] + nums[i - 1];

        int start, sum = 0;
        for (int i = 0; i < n; i++) {
            start = max(0, i - nums[i]);
            sum += store[i + 1] - store[start];
        }

        return sum;
    }
};