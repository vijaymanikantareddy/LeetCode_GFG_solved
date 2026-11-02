class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int median = nums[n / 2];
        int res = 0;

        for(auto it: nums){
            res += abs(median - it);
        }

        return res;
    }
};