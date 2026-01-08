class Solution {
public:
    int infi = -1e9;
    int fun(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& dp, int n, int m){
        if(n < 0 or m < 0){
            return infi;
        }
        if(dp[n][m] != INT_MIN){
            return dp[n][m];
        }
        int take = nums1[n] * nums2[m];

        int res = max({take, 
                    take + fun(nums1, nums2, dp, n - 1, m - 1), 
                    fun(nums1, nums2, dp, n - 1, m),
                    fun(nums1, nums2, dp, n, m - 1)
                });
        return dp[n][m] = res;
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<vector<int>> dp(n, vector<int>(m, INT_MIN));
        return fun(nums1, nums2, dp, n - 1, m - 1);
    }
};