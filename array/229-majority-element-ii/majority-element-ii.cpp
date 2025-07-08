class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int idx1 = INT_MIN, idx2 = INT_MIN, cnt1 = 0, cnt2 = 0;
        vector<int> result;

        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && nums[i] != idx2) {
                idx1 = nums[i];
                cnt1++;
            } else if (cnt2 == 0 && nums[i] != idx1) {
                idx2 = nums[i];
                cnt2++;
            } else if (nums[i] == idx1) {
                cnt1++;
            } else if (nums[i] == idx2) {
                cnt2++;
            } else {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == idx1)
                cnt1++;
            if (nums[i] == idx2)
                cnt2++;
        }

        if (cnt1 >= (n / 3) + 1)
            result.push_back(idx1);
        if (cnt2 >= (n / 3) + 1)
            result.push_back(idx2);

        return result;
    }
};