class Solution {
public:
    bool canJump(vector<int>& nums) {
        int r = 0;
        for(int i = 0 ; i < nums.size(); i++){
            int a = i+nums[i];
            if(r < i){
                return false;
            }
            r = r > a? r: a;
        }
        return true;
    }
};