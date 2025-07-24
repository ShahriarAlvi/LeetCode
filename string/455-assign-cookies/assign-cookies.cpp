class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int cookie = 0, greed = 0, result = 0;
        int greedSize = g.size(), cookieSize = s.size();

        while (cookie < cookieSize && greed < greedSize) {
            if (s[cookie] >= g[greed]) {
                result++;
                greed++;
            }
            cookie++;
        }

        return result;
    }
};