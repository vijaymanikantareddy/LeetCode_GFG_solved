class Solution {
public:
    int findComplement(int num) {
        int bits = log2(num)+1;
        return pow(2,bits)-num-1;
    }
};