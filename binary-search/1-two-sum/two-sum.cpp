class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int pass, n = nums.size();
        
        for(int i = 0; i < n; i++){
            pass = target - nums[i];
            if(mp.find(pass) != mp.end()){
                return {mp[pass], i};
            }
            mp[nums[i]] = i;
        }
        return {};
        
    }
};