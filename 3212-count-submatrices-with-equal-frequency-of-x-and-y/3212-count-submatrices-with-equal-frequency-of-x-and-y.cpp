class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<int>> prex(r+1, vector<int>(c+1, 0));
        vector<vector<int>> prey(r+1, vector<int>(c+1, 0));

        for(int i = 1 ; i <= r ; i++){
            for(int j = 1 ; j <= c ; j++){
                prex[i][j] = prex[i-1][j] + prex[i][j-1] - prex[i-1][j-1] + (grid[i-1][j-1]=='X' ? 1 : 0);
                prey[i][j] = prey[i-1][j] + prey[i][j-1] - prey[i-1][j-1] + (grid[i-1][j-1]=='Y' ? 1 : 0);
            }
        }
        int res = 0;
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                int cx = prex[i+1][j+1] - prex[0][j+1] - prex[i+1][0] + prex[0][0];
                int cy = prey[i+1][j+1] - prey[0][j+1] - prey[i+1][0] + prey[0][0];
                if(cx == cy and cx > 0){
                    res++;
                }
            }
        }
        return res;
    }
};