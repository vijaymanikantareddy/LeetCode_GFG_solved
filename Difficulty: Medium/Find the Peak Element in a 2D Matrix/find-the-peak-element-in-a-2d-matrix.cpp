class Solution {
  public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        // code here
        int mx = INT_MIN;
        int a = 0, b = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[i].size() ; j++){
                if(mat[i][j] > mx){
                    a = i;
                    b = j;
                    mx = mat[i][j];
                }
                // mx = max(mat[i][j], mx);
            }
        }
        // cout << mx << endl;
        return {a, b};
    }
};
