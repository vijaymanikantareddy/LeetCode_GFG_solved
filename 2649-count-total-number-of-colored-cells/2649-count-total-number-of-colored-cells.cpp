class Solution {
public:
    long long coloredCells(int n) {
        if(n == 1) return 1;
        long long prev = 1;
        long long res = 0;
        for(int i = 2 ; i <= n ; i++){
            res = prev + (4 * (i-1));
            prev = res;
        }
        return res;
    }
};