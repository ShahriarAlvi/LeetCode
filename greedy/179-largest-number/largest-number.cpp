class Solution {
public:
    static bool func(const string& a, const string& b) { return a + b > b + a; }

    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        vector<string> temp;
        for (int i = 0; i < n; i++) {
            temp.push_back(to_string(nums[i]));
        }

        sort(temp.begin(), temp.end(), func);

        if (temp[0] == "0")
            return "0";

        string result;
        for (int i = 0; i < temp.size(); i++) {
            result += temp[i];
        }

        return result;
    }
};