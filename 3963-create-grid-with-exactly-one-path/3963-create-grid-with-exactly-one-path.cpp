class Solution {
public:
    vector<string> createGrid(int m, int n) {
        string s(n, '#');
        vector<string> mat(m, s);
        for(int i = 0 ; i < n ; i++){
            mat[0][i] = '.';
        }
        for(int i = 0 ; i < m ; i++){
            mat[i][n-1] = '.';
        }
        return mat;
    }
};