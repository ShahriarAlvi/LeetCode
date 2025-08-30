class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9, m = 9, temp, box_idx;
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> boxes[9];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == '.')
                    continue;

                temp = board[i][j];
                box_idx = (i / 3) * 3 + (j / 3);

                if (rows[i].count(temp) || cols[j].count(temp) ||
                    boxes[box_idx].count(temp))
                    return false;
                rows[i].insert(temp);
                cols[j].insert(temp);
                boxes[box_idx].insert(temp);
            }
        }

        return true;
    }
};