class Solution {
public:
    char kthCharacter(int k) {
        string result = "a";
        
        while (1) {
            string temp = result;
            for (int i = 0; i < temp.size(); i++) {
                if (temp[i] == 'z')
                    temp[i] = 'a';
                else
                    temp[i]++;
            }
            result += temp;
            if (result.size() >= k)
                return result[k - 1];
        }
        return 'a';
    }
};