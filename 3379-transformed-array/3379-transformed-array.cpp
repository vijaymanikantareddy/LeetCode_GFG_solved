class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != 0){
                int ni = (i + nums[i])%n;
                if(ni < 0) ni += n;
                res[i] = nums[ni];
            }
        }
        return res;
    }
};