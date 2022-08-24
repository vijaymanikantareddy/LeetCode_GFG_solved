class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n>0 and 2147483648%n==0;
    }
};