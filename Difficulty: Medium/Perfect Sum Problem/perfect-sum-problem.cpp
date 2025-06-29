class Solution {
  public:
    int fun(vector<vector<int>>& dp, vector<int>& arr, int target, int index){
        if(index == arr.size()){
            if(target == 0) return 1;
            return 0;
        }
        if(dp[index][target] != -1) return dp[index][target];
        int take = 0, nontake = 0;
        if(target >= arr[index]){
            take = fun(dp, arr, target - arr[index], index + 1);
        }
        nontake = fun(dp, arr, target, index + 1);
        return dp[index][target] = take + nontake;
    }
    int perfectSum(vector<int>& arr, int target) {
        // code here
        vector<vector<int>> dp(arr.size(), vector<int>(target + 1, -1));
        return dp[0][target] = fun(dp, arr, target, 0);
    }
};