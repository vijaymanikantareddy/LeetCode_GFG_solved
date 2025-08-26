class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int res = 0, di = 0;
        for(auto it: dimensions){
            int t = it[0]*it[0] + it[1]*it[1];
            if(t > di){
                res = it[0]*it[1];
                di = t;
            }
            if(t == di){
                res = max(res, it[0]*it[1]);
            }
        }
        return res;
    }
};