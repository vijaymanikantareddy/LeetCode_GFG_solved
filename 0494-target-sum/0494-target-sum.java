class Solution {
    int cnt = 0;
    public void fun(int [] nums, int target, int ind){
        if(ind == nums.length){
            if(0 == target){
                cnt++;
            }
            return;
        }
        fun(nums, target-nums[ind], ind+1);
        fun(nums, target+nums[ind], ind+1);
    }
    public int findTargetSumWays(int[] nums, int target) {
        fun(nums, target, 0);
        return cnt;
    }
}