class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_map<int, int> row, col;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[i].size() ; j++){
                row[matrix[i][j]]++;
                col[matrix[j][i]]++;
            }
            if(row.size() != matrix.size() || col.size() != matrix.size()){
                return false;
            }
            row.clear();
            col.clear();
        }
        return true;
    }
};