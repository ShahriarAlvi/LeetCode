class Solution {
public:
    // Dutch National Flag Problem
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int red = 0, white = 0, blue = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0)
                red++;
            else if (nums[i] == 1)
                white++;
            else
                blue++;
        }

        for(int i = 0; i < n; i++){
            if(red > 0){
                nums[i] = 0;
                red--;
            } else if(white > 0){
                nums[i] = 1;
                white--;
            } else {
                nums[i] = 2;
            }
        }
    }
};