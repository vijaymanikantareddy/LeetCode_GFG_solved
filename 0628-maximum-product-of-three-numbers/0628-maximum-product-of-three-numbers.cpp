class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int firstMax = nums[n - 1];
        int secondMax = nums[n - 2];
        int thirdMax = nums[n - 3];
        int firstMin = nums[0];
        int secondMin = nums[1];
        return max(firstMax * secondMax * thirdMax, firstMax * firstMin * secondMin);
    }
};