class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<int> primes(n+1, 1);
        primes[0] = primes[1] = 0;
        for(int i = 2 ; i*i <= n ; i++){
            if(primes[i]){
                for(int j = i*2 ; j <= n ; j += i){
                    primes[j] = 0;
                }
            }
        }
        vector<vector<int>> res;
        for(int i = 2 ; i <= n/2 ; i++){
            if(primes[i] && primes[n-i]){
                res.push_back({i, n-i});
            }
        }
        return res;
    }
};