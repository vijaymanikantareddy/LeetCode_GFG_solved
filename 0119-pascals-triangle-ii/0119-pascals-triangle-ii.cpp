class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> res(rowIndex+1);
        for(int i=0 ; i<rowIndex+1 ; i++){
            res[i].resize(i+1);
            res[i][0]=res[i][i]=1;
            for(int j=1 ; j<i ; j++){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return res[rowIndex];
    }
};