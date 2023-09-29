class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool a = true, b = true;
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] > nums[i-1]){
                a = false;
                break;
            }
        }
        if(a)   
            return a;
        for(int i = nums.size()-1 ; i > 0 ; i--){
            if(nums[i] < nums[i-1]){
                b = false;
                break;
            }
        }
        return (a || b);
    }
};