class Solution {
public:
    int maximum69Number(int num) {
        int arr[10005];
        int count = 0;
        while (num > 0) {
            arr[count] = num % 10;
            count++;
            num /= 10;
        }

        // for (int i = 0; i < count; i++) {
        //     cout << arr[i] << " ";
        // }

        for (int i = count - 1; i >= 0; i--) {
            if (arr[i] == 6) {
                arr[i] = 9;
                break;
            }
        }

        int result = 0;

        for (int i = count - 1; i >= 0; i--) {
            result *= 10;
            result += arr[i];
        }

        return result;
    }
};