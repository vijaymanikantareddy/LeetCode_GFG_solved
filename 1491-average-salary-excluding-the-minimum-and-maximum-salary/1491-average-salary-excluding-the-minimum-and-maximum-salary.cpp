class Solution {
public:
    double average(vector<int>& salary) {
        double min=salary[0], max=0, sum=0;
        int n = salary.size();
        for(int i=0 ; i<n ; i++){
            min = min<salary[i]?min : salary[i];
            max = max>salary[i]?max : salary[i];
            sum+=salary[i];
        }
        return (sum-min-max)/(n-2);
    }
};