class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<long long> pre(n, 0);
        pre[0] = nums[0];
        for(int i = 1; i < n ; i++){
            pre[i] = pre[i-1] + nums[i];
        }
        long long res = 0;
        for(int i = 2 ; i < n ; i++){
            if(nums[i] < pre[i-1]){
                res = max(res, pre[i]); 
            }
        }
        return res==0? -1: res;
    }
};