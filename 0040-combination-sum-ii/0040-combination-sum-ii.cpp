class Solution {
public:
    void fun(int index, vector<int>& nums, int target, vector<int>& temp, 
        set<vector<int>>& res){
        if(index == nums.size()){
            if(0 == target){
                res.insert(temp);
            }
            return ;
        }
        if(nums[index] <= target){
            temp.push_back(nums[index]);
            fun(index + 1, nums, target - nums[index], temp, res);
            temp.pop_back();
        }
        while(index + 1 < nums.size() && nums[index] == nums[index + 1]) 
            index++;

        fun(index + 1, nums, target, temp, res);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        set<vector<int>> res;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        fun(0, candidates, target, temp, res);
        return vector<vector<int>>(res.begin(), res.end());
    }
};