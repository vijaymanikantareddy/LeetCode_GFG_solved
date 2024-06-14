class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0;
        for(int i = 1 ; i < nums.size() ; i++){
            int next = nums[i-1]+1;
            if(next > nums[i]){
                res += abs(nums[i] - next);
                nums[i] = next;
            }
        }
        return res;
    }
};