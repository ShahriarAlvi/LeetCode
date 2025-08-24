class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.size();
        int cnt = 0, result = INT_MAX;
        int left = 0;

        for (int right = 0; right < n; right++) {
            if (blocks[right] == 'W')
                cnt++;

            if (right - left + 1 == k) {
                result = min(result, cnt);
                if (blocks[left] == 'W')
                    cnt--;
                left++;
            }
        }

        return result;
    }
};