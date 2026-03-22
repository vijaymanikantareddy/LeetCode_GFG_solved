class Solution {
public:
    void rotateFun(vector<vector<int>>& mat){
        int n = mat.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        for(int i = 0 ; i < n ; i++){
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    bool checking(vector<vector<int>>& a, vector<vector<int>>& b){
        int n = a.size();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(a[i][j] != b[i][j]) return false;
            }
        }
        return true;
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0 ; i < 4 ; i++){
            rotateFun(mat);
            if(checking(mat, target)){
                return true;
            }
            
        }
        return false;
    }
};