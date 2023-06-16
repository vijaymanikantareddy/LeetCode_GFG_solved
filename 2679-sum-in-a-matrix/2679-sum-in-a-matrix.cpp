class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            sort(nums[i].rbegin(), nums[i].rend());
        }
        int res = 0;
        int n = nums.size();
        int m = nums[0].size();
        for(int i = 0 ; i < m ; i++){
            int mx = nums[0][i];
            for(int j = 1 ; j < n ; j++){
                mx = mx < nums[j][i]? nums[j][i]: mx;
            }
            res += mx;
        }
        return res;
    }
};