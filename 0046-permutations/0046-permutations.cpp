class Solution {
public:
    void fun(vector<vector<int>> &res, vector<int> nums, vector<bool>&vis, vector<int> &temp){
        if(temp.size() == nums.size()){
            res.emplace_back(temp);
            return;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(!vis[i]){
                vis[i] = true;
                temp.emplace_back(nums[i]);
                fun(res, nums, vis, temp);
                temp.pop_back();
                vis[i] = false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<bool> vis(nums.size(), false);
        vector<int> temp;
        fun(res, nums, vis, temp);
        return res;
    }
};