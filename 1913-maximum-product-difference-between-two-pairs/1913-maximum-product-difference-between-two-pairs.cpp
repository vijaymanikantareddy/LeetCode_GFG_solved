class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return abs(nums[0]*nums[1] - nums[nums.size()-1]*nums[nums.size()-2]);
    }
};