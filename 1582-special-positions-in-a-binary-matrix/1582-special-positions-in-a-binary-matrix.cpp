class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int> row, col;
        for(int i = 0 ; i < mat.size() ; i++){
            int s = 0;
            for(int j = 0 ; j < mat[i].size() ; j++){
                s += mat[i][j];
            }
            row.push_back(s);
        }
        for(int i = 0 ; i < mat[0].size() ; i++){
            int s = 0;
            for(int j = 0 ; j < mat.size() ; j++){
                s += mat[j][i];
            }
            col.push_back(s);
        }
        int m = row.size(), n = col.size();
        int res = 0;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[i].size() ; j++){
                if(col[j] == 1 && row[i] == 1 && mat[i][j] == 1){
                    res++;
                }
            }
        }
        return res;
    }
};