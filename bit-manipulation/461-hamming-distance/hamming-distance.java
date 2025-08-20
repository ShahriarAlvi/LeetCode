class Solution {
    public int hammingDistance(int x, int y) {
        int xOR = x ^ y;
        int count = 0;

        while (xOR > 0) {
            count += (xOR & 1);
            xOR >>= 1;
        }
        return count;
    }
}