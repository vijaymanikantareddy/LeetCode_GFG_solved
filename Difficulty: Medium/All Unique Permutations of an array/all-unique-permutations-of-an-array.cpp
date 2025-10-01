class Solution {
  public:
    set<vector<int>> res;
    void fun(vector<int>& arr, vector<int>& vis, int n, 
            vector<int>& temp){
        if(temp.size() == n){
            res.insert(temp);
            return;
        }
        for(int i = 0 ; i < n ; i++){
            if(!vis[i]){
                vis[i] = 1;
                temp.push_back(arr[i]);
                fun(arr, vis, n, temp);
                temp.pop_back();
                vis[i] = 0;
            }
        }
    }
    vector<vector<int>> uniquePerms(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> vis(n, 0);
        vector<int> temp;
        fun(arr, vis, n, temp);
        return vector<vector<int>>(res.begin(), res.end());
    }
};