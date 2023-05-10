class Solution {
    public int[][] generateMatrix(int n) {
        int res[][] = new int[n][n];
        int val = 1, in = 0;
        int left = 0, right = n-1, top = 0, bottom = n-1;
        while(val <= n*n){
            in = left;
            while(in <= right){
                res[top][in] = val;
                val++;
                in++;
            }
            top++;
            in = top;
            while(in <= bottom){
                res[in][right] = val;
                val++;
                in++;
            }
            right--;
            in = right;
            while(in >= left){
                res[bottom][in] = val;
                val++;
                in--;
            }
            bottom--;
            in = bottom;
            while(in >= top){
                res[in][left] = val;
                val++;
                in--;
            }
            left++;
        }
        return res;
    }
}