class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int res = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int j = i + 1;
            int cnt = 1;
            while(j < nums.size() && nums[j] < nums[j-1]){
                j++;
                cnt++;
            }
            res = max(res, cnt);
            j = i + 1;
            cnt = 1;
            while(j < nums.size() && nums[j] > nums[j-1]){
                j++;
                cnt++;
            }
            res = max(res, cnt);
        }
        return res;
    }
};