class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int j = i + 1;
            int cnt = nums[i];
            while(j < nums.size() && nums[j] > nums[j-1]){
                cnt += nums[j];
                j++;
            }
            res = max(res, cnt);
        }
        return res;
    }
};