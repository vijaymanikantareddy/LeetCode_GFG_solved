class Solution {
  public:
    vector<string> res;
    void fun(vector<vector<int>>& maze, int r, int c, int n, string temp, 
        vector<vector<int>>& vis){
        if(maze[r][c] == 0){
            return;
        }
        vis[r][c] = 1;
        if(r == n - 1 && c == n - 1){
            res.push_back(temp);
        }
        if(r - 1 >= 0 && !vis[r - 1][c]){
            fun(maze, r - 1, c, n, temp + "U", vis);
        }
        if(r + 1 < n && !vis[r + 1][c]){
            fun(maze, r + 1, c, n, temp + "D", vis);
        }
        if(c - 1 >= 0 && !vis[r][c - 1]){
            fun(maze, r, c - 1, n, temp + "L", vis);
        }
        if(c + 1 < n && !vis[r][c + 1]){
            fun(maze, r, c + 1, n, temp + "R", vis);
        }
        vis[r][c] = 0;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        string temp = "";
        int n = maze.size();
        vector<vector<int>> vis(n, vector<int>(n, 0));
        fun(maze, 0, 0, n, temp, vis);
        sort(res.begin(), res.end());
        return res;
    }
};