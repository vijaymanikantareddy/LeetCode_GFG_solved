class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res = numBottles;
        while(numBottles >= numExchange){
            int remain = numBottles % numExchange;
            numBottles = numBottles / numExchange;
            res += numBottles;
            numBottles += remain;
        }
        return res;
    }
};