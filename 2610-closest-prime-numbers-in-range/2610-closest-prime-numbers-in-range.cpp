class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> v(right + 1, 1);
        v[0] = v[1] = 0;
        for(long long i = 2 ; i*i <= right ; i++){
            if(v[i]){
                for(long long j = i*i ; j <= right ; j += i){
                    v[j] = 0;
                }
            }
        }
        vector<int> primes;
        for(int i = left ; i <= right ; i++){
            if(v[i]){
                primes.push_back(i);
            }
        }
        vector<int> res = {-1, -1};
        if(primes.size() <= 0) return res;
        int mi = INT_MAX;
        for(int i = 1 ; i < primes.size() ; i++){
            int d = primes[i] - primes[i-1];
            if(d < mi){
                mi = d;
                res = {primes[i-1], primes[i]};
            }
        }
        return res;
    }
};