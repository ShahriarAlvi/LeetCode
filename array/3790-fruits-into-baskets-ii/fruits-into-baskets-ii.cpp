class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = 0; j < n; j++) {
                if (fruits[i] <= baskets[j]) {
                    baskets[j] = INT_MIN;
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                count++;
                // cout << fruits[i] << endl;
            }
        }

        return count;
    }
};