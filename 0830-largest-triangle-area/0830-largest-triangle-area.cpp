class Solution {
public:
    double dist(vector<int>& p1, vector<int>& p2){
        int dx = p1[0] - p2[0];
        int dy = p1[1] - p2[1];
        return sqrt(dx * dx + dy * dy); 
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0;
        for(int i = 0 ; i < points.size() ; i++){
            for(int j = i + 1 ; j < points.size() ; j++){
                for(int k = j + 1 ; k < points.size() ; k++){
                    double a = dist(points[i], points[j]);
                    double b = dist(points[j], points[k]);
                    double c = dist(points[k], points[i]);
                    double s = (a + b + c)/2.0;

                    double temp = s * (s - a) * (s - b) * (s - c);
                    if(temp < 0) temp = 0;
                    double area = sqrt(temp);
                    res = max(area, res);
                }
            }
        }
        return res;
    }
};