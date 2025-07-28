class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> track;
        vector<int> result;
        for (int i = 0; i < nums1.size(); i++) {
            track.insert(nums1[i]);
        }

        for (int i = 0; i < nums2.size(); i++) {
            if (track.count(nums2[i])) {
                if (find(result.begin(), result.end(), nums2[i]) ==
                    result.end()) {
                    result.push_back(nums2[i]);
                }
            }
        }
        return result;
    }
};