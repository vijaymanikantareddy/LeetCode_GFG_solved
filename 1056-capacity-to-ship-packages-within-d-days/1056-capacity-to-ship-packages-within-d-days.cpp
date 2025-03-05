class Solution {
public:
    bool fun(vector<int>& weights, int days, int val){
        int cnt = 0, sum = 0;
        for(int i = 0 ; i < weights.size() ; i++){
            if(sum + weights[i] > val){
                cnt++;
                sum = weights[i];
            }else{
                sum += weights[i];
            }
        }
        if(sum > 0){
            cnt++;
        }
        return (cnt <= days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int high = 0;
        int low = weights[0];
        for(auto it: weights) {
            high += it;
            low = max(low, it);
        }
        while(low <= high){
            int mid = low + (high - low)/2;
            if(fun(weights, days, mid)){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};