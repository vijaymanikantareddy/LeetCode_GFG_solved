class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int small = nums[i], large = nums[i];
            for(int j = i + 1 ; j < nums.size() ; j++){
                small = min(nums[j], small);
                large = max(nums[j], large);
                res += (large - small);
            }
        }
        return res;
    }
};