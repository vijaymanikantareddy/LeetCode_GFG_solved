class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0, j = m-1;
        int small = matrix[0][0], large = matrix[n-1][m-1];
        if(small > target || large < target){
            return false;
        }
        while(i < n && j >= 0){
            if(matrix[i][j] == target){
                return true;
            }
            if(matrix[i][j] > target){
                j--;
            }else{
                i++;
            }
        }
        return false;
    }
};