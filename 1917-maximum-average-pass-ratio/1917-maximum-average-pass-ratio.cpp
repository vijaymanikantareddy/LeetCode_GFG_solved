class Solution {
public:
    double fun(double a, double b){
        return (a+1)/(b+1) - (a/b);
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double, vector<int>>> pq;
        int n = classes.size();
        double total = 0;
        for(int i = 0 ; i < n ; i++){
            double p = (double) classes[i][0] / (double) classes[i][1];
            total += p;
            pq.push({fun(classes[i][0], classes[i][1]), 
                {classes[i][0], classes[i][1]}});
        }
        while(extraStudents--){
            auto it = pq.top();
            pq.pop();
            double p = it.first;
            int a = it.second[0];
            int b = it.second[1];
            total += p;
            pq.push({fun(a+1, b+1), {a+1, b+1}});
        }
        return total / classes.size();
    }
};