class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> primes(n+1, 1);
        primes[0] = primes[1] = 0;
        for(int i = 2 ; i*i <= n ; i++){
            for(int j = i * 2 ; j <= n ; j += i){
                primes[j] = 0;
            }
        }
        long long a = 0, b = 0;
        for(int i = 0 ; i < n ; i++){
            if(primes[i]){
                a += nums[i];
            }else{
                b += nums[i];
            }
        }
        return abs(a - b);
    }
};