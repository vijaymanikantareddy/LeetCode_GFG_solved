class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int maxLeft = 0, minRight = INT_MAX;
        for(int l: left){
            maxLeft = max(l, maxLeft);
        }
        for(int r: right){
            minRight = min(r, minRight);
        }
        return max(maxLeft, n-minRight);
    }
};