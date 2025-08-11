class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> track(n);
        track[0] = 1;

        for (int i = 1; i < n; i++)
            track[i] = track[i - 1] * nums[i - 1];

        int product = 1;

        for (int i = n - 1; i >= 0; i--) {
            track[i] *= product;
            product *= nums[i];
        }

        return track;
    }
};