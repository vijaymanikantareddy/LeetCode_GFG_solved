class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        vector<long long> pre(nums.size(), 0);
        pre[0] = nums[0];
        for(int i = 1; i < nums.size() ; i++){
            pre[i] = pre[i-1]+nums[i];
        }
        int res = 0;
        for(int i = 0 ; i < pre.size() ; i++){
            if(pre[i] > 0){
                res++;
            }
        }
        return res;
    }
};