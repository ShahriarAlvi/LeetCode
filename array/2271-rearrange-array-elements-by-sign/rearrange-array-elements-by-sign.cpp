class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int pos = -1, neg = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0 && pos == -1)
                pos = i;
            if (nums[i] < 0 && neg == -1)
                neg = i;
            if (pos != -1 && neg != -1)
                break;
        }
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                result[i] = nums[pos];
                pos++;
                while (pos < n && nums[pos] < 0 )
                    pos++;
            } else {
                result[i] = nums[neg];
                neg++;
                while (neg < n && nums[neg] > 0)
                    neg++;
            }
        }

        return result;
    }
};