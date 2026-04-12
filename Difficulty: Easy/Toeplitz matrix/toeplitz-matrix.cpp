class Solution {
  public:
    bool isToeplitz(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i < n ; i++){
            int ele = mat[i][0];
            int l = i, r = 0;
            while(l < n && r < m){
                if(ele != mat[l][r]) return false;
                l++;
                r++;
            }
        }
        for(int i = 0 ; i < m ; i++){
            int ele = mat[0][i];
            int l = 0, r = i;
            while(l < n && r < m){
                if(ele != mat[l][r]) return false;
                l++;
                r++;
            }
        }
        return true;
    }
};