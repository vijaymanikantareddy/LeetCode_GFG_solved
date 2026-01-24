class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = nums.front() + nums.back();
        for(int i = 1 ; i < nums.size()/2 ; i++){
            int s = nums[i] + nums[nums.size()-1 -i];
            res = max(res, s);
        }
        return res;
    }
};