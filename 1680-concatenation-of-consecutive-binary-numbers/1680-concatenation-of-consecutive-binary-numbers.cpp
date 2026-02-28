class Solution {
public:
    bool ispow(int n){
        return ((n & (n-1)) == 0);
    }
    int concatenatedBinary(int n) {
        int mod = 1e9 + 7;
        long res = 0;
        int bits = 0;
        for(int i = 1 ; i <= n ; i++){
            if(ispow(i)) bits++;
            res = (res << bits) + i;
            res %= mod;
        }
        return res;
    }
};