class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long target = 0;
        int n = nums.size();
        for(auto it: nums) target += it;
        target -= x;
        int l = 0, r = 0;
        int res = -1;
        long long s = 0;
        while(r < n){
            s += nums[r];
            while(l <= r && s > target){
                s -= nums[l];
                l++;
            }
            if(s == target){
                res = max(res, r - l + 1);
            }
            r++;
        }  
        if(res == -1) return -1;
        return n - res;
    }
};