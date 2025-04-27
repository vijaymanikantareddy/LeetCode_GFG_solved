class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int res = 0;
        for(int i = 0 ; i < nums.size() - 2 ; i++){
            int a = nums[i];
            int b = nums[i + 1];
            int c = nums[i + 2];
            if(b == a + a + c + c) res++;
        }
        return res;
    }
};