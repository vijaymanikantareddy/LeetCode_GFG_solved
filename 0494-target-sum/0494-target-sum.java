class Solution {
    int cnt = 0;
    public void fun(int [] nums, int sum, int target, int ind){
        if(ind == nums.length){
            if(sum == target){
                cnt++;
            }
            return;
        }
        fun(nums, sum+nums[ind], target, ind+1);
        fun(nums, sum-nums[ind], target, ind+1);
    }
    public int findTargetSumWays(int[] nums, int target) {
        fun(nums, 0, target, 0);
        return cnt;
    }
}