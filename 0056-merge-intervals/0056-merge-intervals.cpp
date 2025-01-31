class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int i = 0, j = 1;
        vector<vector<int>> res;
        while(i < intervals.size()){
            int st = intervals[i][0], en = intervals[i][1];
            while(j < intervals.size() && en >= intervals[j][0]){
                en = max(en, intervals[j][1]);
                j++;
            }
            i = j;
            res.push_back({st, en});
        }
        return res;
    }
};