class Solution {
public:
    int countOdds(int low, int high) {
        return (high%2!=0 or low%2!=0)? ((high-low)/2)+1: (high-low)/2;
    }
};