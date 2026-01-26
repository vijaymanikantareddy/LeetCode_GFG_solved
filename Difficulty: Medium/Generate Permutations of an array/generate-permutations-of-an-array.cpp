class Solution {
  public:
    void fun(vector<int>& arr, vector<int>& temp, vector<vector<int>>& res,
            vector<bool>& vis, int n){
        if(temp.size() == n){
            res.push_back(temp);
            return;
        }
        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                temp.push_back(arr[i]);
                vis[i] = true;
                fun(arr, temp, res, vis, n);
                vis[i] = false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permuteDist(vector<int>& arr) {
        // code here
        vector<vector<int>> res;
        vector<int> temp;
        int n = arr.size();
        vector<bool> vis(n, 0);
        fun(arr, temp, res, vis, n);
        return res;
    }
};