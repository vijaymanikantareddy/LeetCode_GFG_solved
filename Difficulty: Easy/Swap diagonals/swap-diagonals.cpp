class Solution {
  public:
    void swapDiagonal(vector<vector<int>> &mat) {
        // code here
        int n = mat.size();
        int a = 0, b = 0, c = 0, d = n - 1;
        for(int i = 0 ; i < n ; i++){
            swap(mat[a][b], mat[c][d]);
            a++;
            b++;
            c++;
            d--;
        }
    }
};
