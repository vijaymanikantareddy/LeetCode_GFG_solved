class Solution {
    public void rotate(int[][] matrix) {
        int temp;
        for(int i=1 ; i<matrix.length ; i++)
        {
            for(int j=0 ; j<=i ; j++){
                temp = matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0 ; i<matrix.length ; i++){
            int le=0, ri=matrix[i].length-1;
            while(le<ri){
                temp = matrix[i][le];
                matrix[i][le] = matrix[i][ri];
                matrix[i][ri] = temp;
                le++;
                ri--;
            }
        }
    }
}