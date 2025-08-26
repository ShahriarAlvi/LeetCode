class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        int a, b, diag, maxDiag = 0, maxArea = 0;

        for (int i = 0; i < n; i++) {
            a = dimensions[i][0];
            b = dimensions[i][1];

            diag = a * a + b * b;
            if (diag > maxDiag) {
                maxDiag = diag;
                maxArea = a * b;
            } else if (diag == maxDiag) {
                maxArea = max(maxArea, a * b);
            }
        }

        return maxArea;
    }
};