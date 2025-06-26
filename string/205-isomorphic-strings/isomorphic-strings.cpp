class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        for (int i = 0; i < n; i++) {
            if (s_map.find(s[i]) == s_map.end())
                s_map[s[i]] = i;
            if (t_map.find(t[i]) == t_map.end())
                t_map[t[i]] = i;
            if (s_map[s[i]] != t_map[t[i]])
                return false;
        }
        return true;
    }
};