class Solution {
public:
    int climbStairs(int n) {
        if(n <= 3) return n;
        int a = 2, b = 3, c = 5;
        for(int i = 4 ; i <= n ; i++){
            c = a+b;
            a = b;
            b = c;
        }
        return b;
    }
};