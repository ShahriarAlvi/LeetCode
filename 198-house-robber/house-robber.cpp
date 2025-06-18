class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0], prev2 = 0, curr, pick;

        for (int i = 1; i < n; i++) {
            pick = nums[i];
            if(i > 1) pick += prev2;
            curr = max(pick, prev);
            prev2 = prev;
            prev = curr;
        }

        return prev;
    }
};