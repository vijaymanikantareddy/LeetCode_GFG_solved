class Solution {
public:
    int fun(vector<int>& dp, vector<int> nums, int ind){
        if(ind >= nums.size()){
            return 0;
        }
        if(dp[ind] != -1) return dp[ind];
        int nottake = fun(dp, nums, ind+1);
        int take = nums[ind] + fun(dp, nums, ind+2);
        return dp[ind] = max(take, nottake);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return dp[0] = fun(dp, nums, 0);
    }
};