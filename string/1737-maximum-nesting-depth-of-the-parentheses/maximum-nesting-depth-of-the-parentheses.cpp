class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int left = 0, result = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(')
                left++;
            else if(s[i] == ')'){
                result = max(left, result);
                left--;
            }
        }

        return result;
    }
};