class Solution {
  public:
    void fun(int n, int k, int sum, vector<int>& temp, 
            vector<vector<int>>& res, int start, vector<int>& vis){
        if(temp.size() == k){
            if(sum == n){
                res.push_back(temp);
            }
            return;
        }
        for(int i = start ; i <= 9 ; i++){
            if(!vis[i]){
                temp.push_back(i);
                vis[i] = 1;
                fun(n, k, sum + i, temp, res, i, vis);
                temp.pop_back();
                vis[i] = 0;
            }
        }
    }
    vector<vector<int>> combinationSum(int n, int k) {
        // code here
        vector<vector<int>> res;
        vector<int> temp;
        vector<int> vis(n+1, 0);
        fun(n, k, 0, temp, res, 1, vis);
        return res;
    }
};