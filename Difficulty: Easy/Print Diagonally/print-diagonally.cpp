class Solution {
  public:
    void fun(vector<vector<int>>& mat, int r, int c, vector<int>& res){
        while(r < mat.size() && c >= 0){
            res.push_back(mat[r][c]);
            r++;
            c--;
        }
        return ;
    }
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        vector<int> res;
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i < m ; i++){
            fun(mat, 0, i, res);
        }
        for(int i = 1 ; i < n ; i++){
            fun(mat, i, m - 1, res);
        }
        return res;
    }
};