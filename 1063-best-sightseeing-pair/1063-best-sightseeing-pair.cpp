class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int res = 0;
        int first = values[0];
        for(int i = 1 ; i < values.size() ; i++){
            int second = values[i] - i;
            res = max(res, first + second);
            first = max(first, values[i] + i);
        }
        return res;
    }
};