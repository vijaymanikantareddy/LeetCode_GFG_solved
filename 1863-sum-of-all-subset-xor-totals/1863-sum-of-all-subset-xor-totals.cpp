class Solution {
public:
    int xorarr(vector<int> temp){
        int res = 0;
        for(int i = 0 ; i<temp.size() ; i++){
            res ^= temp[i];
        }
        return res;
    }
    vector<vector<int>> res;
    void fun(vector<int>&nums, int index, vector<int> temp){
        if(index == nums.size()){
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        fun(nums, index+1, temp);
        temp.pop_back();
        fun(nums, index+1, temp);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        fun(nums, 0, temp);
        int sum = 0;
        for(auto it: res){
            sum += xorarr(it);
        }
        return sum;
    }
};