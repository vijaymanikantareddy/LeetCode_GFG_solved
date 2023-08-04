class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long res = 0;
        vector<long long> ans(nums.begin(), nums.end());
        for(int i = nums.size()-1 ; i > 0 ; i--){
            if(ans[i] >= ans[i-1]){
                int temp = ans[i-1];
                ans[i-1] += ans[i];
                ans[i] = temp;
            }
        }
        for(int i = 0 ; i < ans.size() ; i++){
            res = res > ans[i]? res: ans[i];
        }
        return res;
    }
};