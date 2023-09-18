class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> v;
        for(int i = 0 ; i < mat.size() ; i++){
            int s = 0;
            for(int j = 0 ; j < mat[i].size() ;j++){
                s += mat[i][j];
            }
            v.push_back({s, i});
        }
        sort(v.begin(), v.end());
        vector<int> res;
        for(int i = 0; i < k ; i++){
            res.push_back(v[i].second);
        }
        return res;
    }
};