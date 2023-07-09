class Solution {
    int divisors(int n){
        int sum=0, cnt=0;
        for(int i=1 ; i*i<=n ; i++){
            if(n%i==0){
                if(i!=n/i){
                    sum+= n/i;
                    cnt++;
                }
                sum+= i;
                cnt++;
            }
        }
        return cnt==4? sum: 0;
    }
    public int sumFourDivisors(int[] nums) {
        int res = 0;
        for(int i = 0 ; i<nums.length ; i++){
            res += divisors(nums[i]);
        }
        return res;
    }
}