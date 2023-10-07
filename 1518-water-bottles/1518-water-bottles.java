class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int result=numBottles;
        while(numBottles >= numExchange){
            int rem = numBottles%numExchange;
            numBottles = numBottles/numExchange;
            result += numBottles;
            numBottles = numBottles+rem;
        }
        return result;
    }
}