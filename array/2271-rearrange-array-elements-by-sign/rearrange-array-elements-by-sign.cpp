class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pos = 0, neg = 1;
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                result[pos] = nums[i];
                pos = pos + 2;
            } else {
                result[neg] = nums[i];
                neg = neg + 2;
            }
        }

        return result;
    }
};