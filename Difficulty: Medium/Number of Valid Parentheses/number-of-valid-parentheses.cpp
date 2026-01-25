class Solution {
  public:
    int fun(int open, int close){
        if(open < 0 || close < 0 || open < close){
            return 0;
        }
        if(open == 0 && close == 0){
            return 1;
        }
        return fun(open - 1, close) + fun(open, close - 1);
    }
    int findWays(int n) {
        // code here
        if(n&1) return 0;
        return fun(n/2, n/2);
    }
};