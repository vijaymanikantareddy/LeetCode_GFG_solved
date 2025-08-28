class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int res = 0;
        int i = 0, j = 0;
        int cnt = 0;
        while(j < nums.size()){
            if(nums[j] == 0){
                cnt++;
            }
            while(cnt > k){
                if(nums[i] == 0){
                    cnt--;
                }
                i++;
            }
            res = max(res, j - i + 1);
            j++;
        }
        return res;
    }
};