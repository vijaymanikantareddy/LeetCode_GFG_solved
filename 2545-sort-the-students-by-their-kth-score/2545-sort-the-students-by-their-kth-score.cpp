class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<vector<int>> res;
        vector<pair<int, int>> row;
        int n = score.size();
        for(int i = 0 ; i < n ; i++){
            row.push_back({score[i][k], i});
        }
        sort(row.rbegin(), row.rend());
        for(auto it: row){
            res.push_back(score[it.second]);
        }
        
        
        return res;
    }
};