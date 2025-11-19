class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        sort(nums.begin(), nums.end());
        int val = original;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == val){
                val *= 2;
            }
        }
        return val;
    }
};