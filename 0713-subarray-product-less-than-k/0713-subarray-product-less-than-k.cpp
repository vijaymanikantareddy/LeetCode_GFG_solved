class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int pro = 1, start = 0, end = 0, ans = 0;
        while(end < nums.size()){
            pro *= nums[end];
            end++;
            while(start < end && pro >= k){
                pro /= nums[start];
                start++;
            }
            if(pro < k){
                ans += (end-start);
                // cout << ans << " -> " << start << " " << end << endl;
            }
        }
        return ans;
    }
};