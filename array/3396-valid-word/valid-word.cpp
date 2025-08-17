class Solution {
public:
    bool isValid(string word) {
        bool isVowel = false, isConst = false;

        int n = word.size();
        if (n < 3)
            return false;

        for (int i = 0; i < n; i++) {
            char a = word[i];
            if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) {
                a = tolower(a);
                if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
                    isVowel = true;
                else
                    isConst = true;
            } else if (!(a >= 48 && a <= 57))
                return false;
        }

        return (isVowel && isConst);
    }
};