class Solution {
public:
    bool fun(vector<int>& candies, long long val, long long k){
        if(val == 0) return true;
        for(int i = 0 ; i < candies.size() ; i++){
            long long count = candies[i]/val;
            k -= count;
        }
        return (k <= 0);
    }
    int maximumCandies(vector<int>& candies, long long k) {
        long long low = 0, high = candies[0];
        for(auto it: candies) high = max(high, (long long) it);
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(fun(candies, mid, k)){
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return high;
    }
};