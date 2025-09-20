class NumArray {
public:
    vector<int> store;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        store.push_back(0);
        for (int i = 0; i < n; i++) {
            store.push_back(store.back() + nums[i]);
        }
    }

    int sumRange(int left, int right) { return store[right + 1] - store[left]; }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */