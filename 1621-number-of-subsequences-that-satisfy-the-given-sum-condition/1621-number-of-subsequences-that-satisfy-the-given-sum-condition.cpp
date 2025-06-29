class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        long long res = 0;
        int mod = 1e9 + 7;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<long long> pow2(n, 1);
        for(int i = 1 ; i < n ; i++){
            pow2[i] = (pow2[i - 1] * 2) % mod;
        }
        int left = 0, right = n - 1;
        while(left <= right){
            if(nums[left] + nums[right] <= target){
                res = (res + pow2[right - left]) % mod;
                left++;
            }else{
                right--;
            }
        }
        return res % mod;
    }
};