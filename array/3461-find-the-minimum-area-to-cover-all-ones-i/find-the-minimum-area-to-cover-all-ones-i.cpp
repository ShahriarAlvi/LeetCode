class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int row_min = n, col_min = m;
        int row_max = 0, col_max = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    if (i > row_max)
                        row_max = i;
                    if (i < row_min)
                        row_min = i;
                    if (j > col_max)
                        col_max = j;
                    if (j < col_min)
                        col_min = j;
                }
            }
        }

        return (row_max - row_min + 1) * (col_max - col_min + 1);
    }
};