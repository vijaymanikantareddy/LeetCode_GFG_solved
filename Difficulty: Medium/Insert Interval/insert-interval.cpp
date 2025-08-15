class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        intervals.push_back(newInterval);
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