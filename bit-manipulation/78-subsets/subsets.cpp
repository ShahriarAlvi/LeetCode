class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result = {{}};
        int n = nums.size();
        vector<int> copy;
        int num, size;

        for (int i = 0; i < n; i++) {
            num = nums[i];
            size = result.size();

            for (int j = 0; j < size; j++) {
                copy = result[j];
                copy.push_back(num);
                result.push_back(copy);
            }
        }
        return result;
    }
};