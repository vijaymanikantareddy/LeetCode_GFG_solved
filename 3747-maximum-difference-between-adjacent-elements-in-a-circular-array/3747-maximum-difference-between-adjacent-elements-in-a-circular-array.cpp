class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        nums.push_back(nums.front());
        int res = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            int di = abs(nums[i] - nums[i - 1]);
            res = max(res, di);
        }
        return res;
    }
};