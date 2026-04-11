class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        if(nums.size() < 3) return -1;
        int res = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i + 1 ; j < nums.size() ; j++){
                for(int k = j + 1 ; k < nums.size() ; k++){
                    if(nums[i] == nums[j] && nums[j] == nums[k]){
                        res = min(res, abs(i - j) + abs(j - k) + abs(k - i));
                    }
                }
            }
        }
        if(res == INT_MAX) return -1;
        return res;
    }
};