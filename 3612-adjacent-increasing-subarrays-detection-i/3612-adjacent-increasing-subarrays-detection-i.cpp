class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        if(k == 1) return true;
        for(int i = 0 ; i + 2 * k <= nums.size() ; i++){
            bool a = true, b = true;

            for(int j = i + 1 ; j < i + k ; j++){
                if(nums[j] <= nums[j - 1]){
                    a = false;
                    break;
                }
            }
            
            for(int j = i + k + 1 ; j < i + 2 * k ; j++){
                if(nums[j] <= nums[j - 1]){
                    b = false;
                    break;
                }
            }

            if(a && b) return true;
        }
        return false;
    }
};