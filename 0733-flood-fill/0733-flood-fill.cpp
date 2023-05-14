class Solution {
public:
    void dfs(vector<vector<int>>& ans, int sr, int sc, int color, int iniColor, int rows[], int cols[]){
        ans[sr][sc] = color;
        int n = ans.size();
        int m = ans[0].size();
        for(int i = 0 ; i < 4 ; i++){
            int newRow = sr+rows[i];
            int newCol = sc+cols[i];
            if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && ans[newRow][newCol]==iniColor){
                dfs(ans, newRow, newCol, color, iniColor, rows, cols);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(color == image[sr][sc]){
            return image;
        }
        vector<vector<int>> ans = image;
        int iniColor = ans[sr][sc];
        int rows[] = {-1, 0, 1, 0};
        int cols[] = {0, 1, 0, -1};
        dfs(ans, sr, sc, color, iniColor, rows, cols);
        return ans;
    }
};