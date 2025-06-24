class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0, result = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 1) {
                result = max(sum, result);
                sum = 0;
            } else
                sum++;
        }
        return max(sum, result);
    }
};