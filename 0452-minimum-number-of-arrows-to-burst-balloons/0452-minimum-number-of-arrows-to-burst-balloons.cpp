class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() == 0) return 0;
        // sort based on end time
        sort(points.begin(), points.end(), [](const vector<int>&a, const vector<int>&b){
            return a[1] < b[1];
        });
        int arrow = 1, end = points[0][1]; //maintain the last 
        for(int i = 1 ; i < points.size() ; i++){
            if(points[i][0] > end){ // if the end is small than the present start value, update it and increase the arrows
                end = points[i][1];
                arrow++;
            }
        }
        return arrow;
    }
};