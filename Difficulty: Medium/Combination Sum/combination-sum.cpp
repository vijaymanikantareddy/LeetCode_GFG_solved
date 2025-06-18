// User function template for C++

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    void fun(int index, vector<int>& arr, int target, vector<int>& temp, 
        vector<vector<int>>& res){
        if(index == arr.size()){
            if(0 == target){
                res.push_back(temp);
            }
            return ;
        }
        if(arr[index] <= target){
            temp.push_back(arr[index]);
            fun(index, arr, target - arr[index], temp, res);
            temp.pop_back();
        }
        fun(index + 1, arr, target, temp, res);
        
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        // Your code here
        vector<vector<int>> res;
        vector<int> temp;
        sort(arr.begin(), arr.end());
        fun(0, arr, target, temp, res);
        return res;
    }
};