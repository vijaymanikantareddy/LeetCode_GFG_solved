class Solution {
    public int divide(int dividend, int divisor) {
        int mx = (1<<31)-1;
        int mn = -1*(1<<31);
        if(divisor == 1){
            return dividend;
        }
        if(divisor == -1){
            if(dividend == mn){
                return mx;
            }
            return -dividend;
        }
        long a = dividend/divisor;

        if(a < mn){
            return mn;
        }
        if(a > mx){
            return mx;
        }
        return (int)a;
    }
}