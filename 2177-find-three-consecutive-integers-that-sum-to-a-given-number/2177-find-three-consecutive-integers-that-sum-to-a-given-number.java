class Solution {
    public long[] sumOfThree(long num) {
        if(num%3 != 0){
            return new long[0];
        }
        long [] res = new long[3];
        long a = num/3;
        res[0] = a-1;
        res[1] = a;
        res[2] = a+1;
        return res;
    }
}