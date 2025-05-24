class Solution {
public:
    bool isprime(long long num){
        if(num <= 1) return false;
        for(long long i = 2 ; i * i <= num ; i++){
            if(num % i == 0) return false;
        }
        return true;
    }
    long long sumOfLargestPrimes(string s) {
        map<long long, int> mp;
        long long res = 0;
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = i ; j < s.size() ; j++){
                string t = s.substr(i, j - i + 1);
                long long num = stoll(t);
                if(isprime(num)){
                    mp[num]++;
                }
            }
        }
        if(mp.size() >= 3){
            for(int i = 0 ; i < 3 ; i++){
                res += mp.rbegin()->first;
                mp.erase(mp.rbegin()->first);
            }
        }else{
            while(mp.size()){
                res += mp.rbegin()->first;
                mp.erase(mp.rbegin()->first);
            }
        }
        return res;
    }
};