class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();

        if (n < m)
            return {};

        vector<int> arr1(26, 0);
        vector<int> arr2(26, 0);
        vector<int> result;

        for (int i = 0; i < m; i++) {
            arr1[p[i] - 'a']++;
            arr2[s[i] - 'a']++;
        }

        if (arr1 == arr2)
            result.push_back(0);

        for (int i = m; i < n; i++) {
            arr2[s[i-m] - 'a']--;
            arr2[s[i] - 'a']++;
            if (arr2 == arr1)
                result.push_back(i - m + 1);
        }
        return result;
    }
};