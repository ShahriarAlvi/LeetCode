class Solution {
public:
    string frequencySort(string s) {
        int n = s.length();
        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++)
            mp[s[i]]++;

        priority_queue<pair<int, char>> pq;

        for (auto it = mp.begin(); it != mp.end(); it++) {
            pq.push({it->second, it->first});
        }

        string res = "";
        while (!pq.empty()) {
            auto i = pq.top();
            pq.pop();
            res.append(i.first, i.second);
        }

        return res;
    }
};