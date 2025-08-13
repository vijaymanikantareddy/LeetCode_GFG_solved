class Solution {
public:
    bool isPowerOfThree(int n) {
        return n>0 and 1162261467%n==0;
        // n must be greater than 0 and the largest power of 3 is 3^19 and since 3 is prime, only a power of 3 would be divisible
    }
};