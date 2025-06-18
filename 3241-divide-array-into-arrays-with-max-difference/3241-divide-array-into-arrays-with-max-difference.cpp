class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < n ; i += 3){
            vector<int> t;
            for(int j = i ; j < i+3 ; j++){
                t.push_back(nums[j]);
            }
            if(t.back() - t.front() <= k){
                res.push_back(t);
            }else{
                return {};
            }
        }
        return res;
    }
};