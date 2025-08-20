class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> pairMap = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];

            if (pairMap.containsKey(target - num)) {
                return new int[] { i, pairMap.get(target - num) };
            }
            pairMap.put(num, i);
        }
        return new int[] {};
    }
}