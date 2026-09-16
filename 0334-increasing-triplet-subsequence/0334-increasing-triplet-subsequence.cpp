class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int first = INT_MAX, second = INT_MAX;
        for(auto it: nums){
            if(it <= first){
                first = it;
            }else if(it <= second){
                second = it;
            }else return true;
        }
        return false;
    }
};