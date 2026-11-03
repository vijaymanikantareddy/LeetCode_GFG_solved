class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        for(auto it: nums) mx = max(mx, it);
        int res = 0;
        for(auto it: nums) res += (mx - it);
        return res;
    }
};