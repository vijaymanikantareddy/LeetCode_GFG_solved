class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int res = 0, i = 0;
        while(i < colors.size()-1){
            int j = i+1;
            int sum = neededTime[i], mx = neededTime[i];
            while(j < colors.size() && colors[i] == colors[j]){
                sum += neededTime[j];
                mx = max(neededTime[j], mx);
                j++;
            }
            i = j;
            res += (sum - mx);
        }
        return res;
    }
};