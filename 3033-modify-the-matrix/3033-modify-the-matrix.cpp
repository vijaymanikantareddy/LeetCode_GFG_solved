class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        vector<int> maxval(m, INT_MIN);
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                maxval[j] = max(matrix[i][j], maxval[j]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = maxval[j];
                }
            }
        }
        return matrix;
    }
};