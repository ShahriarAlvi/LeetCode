class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        int result = 0;

        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        for(auto it = freq.begin(); it != freq.end(); it++){
            int key = it->first;
            int val = it->second;
            if(freq.find(key + 1) != freq.end()){
                result = max(result, val + freq[key + 1]);
            }
        }

        return result;
    }
};