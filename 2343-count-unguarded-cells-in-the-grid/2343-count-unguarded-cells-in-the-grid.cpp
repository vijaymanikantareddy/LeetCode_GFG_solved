class Solution {
public:
    int dirx[4] = {1, -1, 0, 0};
    int diry[4] = {0, 0, 1, -1};
    void dfs(vector<vector<int>>& mat, int m, int n, int i, int j){
        int a = i-1, b = j;
        while(a >= 0 && b >= 0){ //left
            if(mat[a][b] != 1 && mat[a][b] != 2){
                mat[a][b] = 3;
            }else break;
            a--;
        }
        a = i+1, b = j;
        while(a < m){
            if(mat[a][b] != 1 && mat[a][b] != 2){
                mat[a][b] = 3;
            }else break;
            a++;
        }
        a = i, b = j-1;
        while(b >= 0){
            if(mat[a][b] != 1 && mat[a][b] != 2){
                mat[a][b] = 3;
            }else break;
            b--;
        }
        a = i, b = j+1;
        while(b < n){
            if(mat[a][b] != 1 && mat[a][b] != 2){
                mat[a][b] = 3;
            }else break;
            b++;
        }
    }
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> mat(m, vector<int>(n, 0));
        for(auto it: guards){
            mat[it[0]][it[1]] = 1;
        }
        for(auto it: walls){
            mat[it[0]][it[1]] = 2;
        }
        for(auto it: guards){
            dfs(mat, m, n, it[0], it[1]);
        }
        // dfs(mat, m, n, guards[0][0], guards[0][1]);
        int res = 0;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                cout << mat[i][j] << " ";
                if(mat[i][j] == 0) res++;
            }
            cout << endl;
        }
        return res;
    }
};