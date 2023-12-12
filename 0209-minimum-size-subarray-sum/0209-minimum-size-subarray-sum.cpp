class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int res = INT_MAX;
        int s = 0;
        while(j < nums.size()){
            s += nums[j];
            while(i < j && s > target){
                if(s >= target){
                    res = min(res, j - i + 1);
                }
                s -= nums[i];
                i++;
            }
            if(s >= target){
                res = min(res, j - i + 1);
            }
            j++;
        }
        if(res == INT_MAX) return 0;
        return res ;
    }
};