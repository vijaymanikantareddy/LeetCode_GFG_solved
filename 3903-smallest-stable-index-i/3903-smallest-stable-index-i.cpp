class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pre(n, INT_MIN), post(n, INT_MAX);
        pre[0] = nums[0];
        for(int i = 1 ; i < n ; i++){
            pre[i] = max(nums[i], pre[i - 1]);
        }
        post[n - 1] = nums[n - 1];
        for(int i = n - 2 ; i >= 0 ; i--){
            post[i] = min(nums[i], post[i + 1]);
        }
        int res = -1;
        for(int i = 0 ; i < n ; i++){
            if(pre[i] - post[i] <= k){
                return i;
            }
        }
        return res;
    }
};