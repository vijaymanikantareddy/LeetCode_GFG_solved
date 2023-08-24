class Solution {
public:
    vector<vector<int>> ans;
    void fun(vector<int> arr, int target, vector<int> ve, int i){
        if(target == 0){
            ans.push_back(ve);
        }
        if(i == arr.size()){
            return ;
        }
        while(i < arr.size() && target - arr[i] >= 0){
            ve.push_back(arr[i]);
            fun(arr, target-arr[i], ve, i);
            i++;
            ve.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> ve;
        fun(candidates, target, ve, 0);
        return ans;
    }
};