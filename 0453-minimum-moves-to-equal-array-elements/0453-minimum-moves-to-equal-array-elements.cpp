class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mi = INT_MAX;
        for(int ele: nums){
            mi = mi<ele? mi: ele;
        }
        int res = 0;
        for(int ele: nums){
            res += ele-mi;
        }
        return res;
    }
};