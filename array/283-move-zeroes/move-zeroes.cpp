class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i, j;
        
        for(i = 0, j = 0; i < n; i++){
            if(nums[i] == 0) continue;
            nums[j] = nums[i];
            j++;
        }
        
        while(j < n){
            nums[j] = 0;
            j++;
        }
        
    }
};