class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1) return 0;
        int res = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int l = 0, r = k - 1 ; r < nums.size() ; l++, r++){
            res = min(res, nums[r] - nums[l]);
        }
        return res;
    }
};