class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long res = 0;
        int cnt = 0, zc = 0;
        int mn = abs(matrix[0][0]);
        for(int i = 0 ; i < matrix.size() ;i++){
            for(int j = 0 ; j < matrix[i].size() ; j++){
                res += abs(matrix[i][j]);
                if(matrix[i][j] != 0)
                   mn = min(mn, abs(matrix[i][j]));
                if(matrix[i][j] < 0) cnt++;
                if(matrix[i][j] == 0) zc++;
            }
        }
        // cout << cnt << " " << res << " " << mn << endl;
        mn = abs(mn);
        if(cnt%2 == 0 || (zc > 0)) return res;
        else return res - 2 * mn;

    }
};