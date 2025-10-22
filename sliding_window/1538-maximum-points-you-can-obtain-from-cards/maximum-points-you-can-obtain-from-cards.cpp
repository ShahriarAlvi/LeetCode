class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0, window = 0;
        int w_size = n - k;
        for (int i = 0; i < n; i++) {
            total += cardPoints[i];
            if (i < w_size)
                window += cardPoints[i];
        }

        int ans = window;

        for (int i = w_size; i < n; i++) {
            window -= cardPoints[i - w_size]; 
            window += cardPoints[i]; 
            ans = min(ans, window);
        }

        return total - ans;
    }
};