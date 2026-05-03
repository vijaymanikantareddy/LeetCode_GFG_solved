class Solution {
public:
    int reverse(int n){
        int num = 0;
        while(n > 0){
            int d = n % 10;
            num = num * 10 + d;
            n /= 10;
        }
        return num;
    }
    int sumOfPrimesInRange(int n) {
        vector<int> primes(1001, 1);
        primes[0] = primes[1] = 0;
        for(int i = 2 ; i <= 1000 ; i++){
            if(primes[i]){
                for(int j = i * i ; j <= 1000 ; j += i){
                    primes[j] = 0;
                }
            }
        }
        int rev = reverse(n);
        int s = 0;
        for(int i = min(n, rev) ; i <= max(rev, n) ; i++){
            if(primes[i]){
                s += i;
            }
        }
        return s;
    }
};