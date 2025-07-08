class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int start = intervals[0][0], close = intervals[0][1];
        vector<vector<int>> result;

        for (int i = 1; i < n; i++) {
            if (intervals[i][0] <= close) {
                close = max(close, intervals[i][1]);
            } else {
                result.push_back({start, close});
                start = intervals[i][0];
                close = intervals[i][1];
            }
        }
        result.push_back({start, close});

        return result;
    }
};