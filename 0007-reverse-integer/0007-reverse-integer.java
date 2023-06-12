class Solution {
    public int reverse(int x) {
        int sum=0;
        boolean flag = false;
        if(x < 0){
            flag = true;
            x = -1*x;
        }
        while(x > 0){
            int d = x%10;
            if(sum < Integer.MIN_VALUE/10 || sum > Integer.MAX_VALUE/10)
                return 0;
            sum = sum*10 + d;
            x/=10;
        }
        if(flag){
            return -1*sum;
        }
        return sum;
    }
}