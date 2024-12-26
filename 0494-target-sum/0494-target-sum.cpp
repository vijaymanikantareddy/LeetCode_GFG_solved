class Solution {
public:
    int cnt = 0;
    void fun(vector<int>&nums, int target, int ind, int sum){
        if(ind == nums.size()){
            if(sum == target){
                cnt++;
            }
            return;
        }
        fun(nums, target, ind+1, sum-nums[ind]);
        fun(nums, target, ind+1, sum+nums[ind]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        fun(nums, target, 0, 0);
        return cnt;
    }
};