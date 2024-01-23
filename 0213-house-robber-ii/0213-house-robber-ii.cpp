class Solution {
public:
    int fun(vector<int>& dp, vector<int> nums, int ind, int end){
        if(ind >= end) return 0;
        if(dp[ind] != -1) return dp[ind];
        int nottake = fun(dp, nums, ind+1, end);
        int take = nums[ind] + fun(dp, nums, ind+2, end);
        return dp[ind] = max(take, nottake);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(nums.size(), -1);
        vector<int> dp1(n, -1);
        dp[0] = fun(dp, nums, 0, n-1);
        if(nums.size() == 1) return nums[0];
        dp1[1] = fun(dp1, nums, 1, n);
        return max(dp[0], dp1[1]);
    }
};