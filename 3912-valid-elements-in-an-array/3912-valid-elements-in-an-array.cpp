class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        res.push_back(nums[0]);
        for(int i = 1 ; i < n - 1 ; i++){
            int mx = nums[0];
            for(int j = 0 ; j < i ; j++){
                mx = max(mx, nums[j]);
            }
            if(mx < nums[i]){
                res.push_back(nums[i]);
                continue;
            }
            mx = nums[i + 1];
            for(int j = i + 1 ; j < n ; j++){
                mx = max(mx, nums[j]);
            }
            if(mx < nums[i]){
                res.push_back(nums[i]);
            }
        }
        if(n - 1 != 0)
            res.push_back(nums[n - 1]);
        return res;
    }
};