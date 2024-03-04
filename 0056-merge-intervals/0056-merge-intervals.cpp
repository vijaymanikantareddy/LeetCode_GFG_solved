class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        sort(intervals.begin(), intervals.end());
        int i = 0;
        while(i < intervals.size()){
            int a = intervals[i][0];
            int b = intervals[i][1];
            int j = i+1;
            while(j < intervals.size() && intervals[j][0] <= b){
                a = min(a, intervals[j][0]);
                b = max(b, intervals[j][1]);
                j++;
                i++;
            }
            res.push_back({a, b});
            i++;
        }
        return res;
    }
};