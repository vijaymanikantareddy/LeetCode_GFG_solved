class Solution {
    public int findDuplicate(int[] nums) {
        HashSet<Integer> hs = new HashSet<>();
        for(int i = 0 ; i < nums.length ; i++){
            if(hs.contains(nums[i])){
                return nums[i];
            }
            hs.add(nums[i]);
        }
        return nums.length;
    }
}