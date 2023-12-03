class Solution {
public:
    int dist(pair<int, int> a, pair<int, int> b){
        int x = abs(a.first - b.first);
        int y = abs(a.second - b.second);
        return max(x, y);
    }
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res = 0;
        for(int i = 1 ; i < points.size() ; i++){
            pair<int, int> a = {points[i][0], points[i][1]};
            pair<int, int> b = {points[i-1][0], points[i-1][1]};
            res += dist(a, b);
        }
        return res;
    }
};