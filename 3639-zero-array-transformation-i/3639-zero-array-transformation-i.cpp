class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> pre(n, 0);
        for(auto it: queries){
            pre[it[0]]--;
            if(it[1] + 1 < n)
                pre[it[1] + 1]++;
        }
        for(int i = 1 ; i < n ; i++){
            pre[i] += pre[i - 1];
        }
        for(int i = 0 ; i < n ; i++){
            nums[i] += pre[i];
            if(nums[i] > 0) return false;
        }
        return true;
    }
};